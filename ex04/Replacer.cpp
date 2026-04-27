#include "Replacer.hpp"

#include <fstream>
#include <iostream>
#include <sstream>

Replacer::Replacer(const std::string& filename,
				   const std::string& s1,
				   const std::string& s2)
	: _filename(filename), _s1(s1), _s2(s2)
{
}

Replacer::~Replacer(void)
{
}

std::string	Replacer::_replaceAll(const std::string& content) const
{
	std::string	result;
	size_t		start = 0;
	size_t		found;
	const size_t	s1len = this->_s1.length();

	while ((found = content.find(this->_s1, start)) != std::string::npos)
	{
		result.append(content, start, found - start);
		result.append(this->_s2);
		start = found + s1len;
	}
	result.append(content, start, content.length() - start);
	return (result);
}

bool	Replacer::run(void) const
{
	if (this->_s1.empty())
	{
		std::cerr << "Error: s1 must not be empty." << std::endl;
		return (false);
	}

	std::ifstream	in(this->_filename.c_str());
	if (!in.is_open())
	{
		std::cerr << "Error: could not open input file '"
			<< this->_filename << "'." << std::endl;
		return (false);
	}

	std::ostringstream	buffer;
	buffer << in.rdbuf();
	in.close();

	const std::string	outName = this->_filename + ".replace";
	std::ofstream	out(outName.c_str());
	if (!out.is_open())
	{
		std::cerr << "Error: could not open output file '"
			<< outName << "'." << std::endl;
		return (false);
	}

	out << this->_replaceAll(buffer.str());
	out.close();
	return (true);
}
