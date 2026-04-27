#ifndef REPLACER_HPP
# define REPLACER_HPP

# include <string>

class Replacer
{
	private:
		std::string	_filename;
		std::string	_s1;
		std::string	_s2;

		std::string	_replaceAll(const std::string& content) const;

	public:
		Replacer(const std::string& filename,
				 const std::string& s1,
				 const std::string& s2);
		~Replacer(void);

		bool	run(void) const;
};

#endif
