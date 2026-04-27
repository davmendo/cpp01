#include "Replacer.hpp"

#include <iostream>

int	main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << (argc > 0 ? argv[0] : "replace")
			<< " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	Replacer	replacer(argv[1], argv[2], argv[3]);
	if (!replacer.run())
		return (1);
	return (0);
}
