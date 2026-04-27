#include "Harl.hpp"

#include <iostream>
#include <string>

static int	levelToIndex(const std::string& level)
{
	if (level == "DEBUG")
		return (0);
	if (level == "INFO")
		return (1);
	if (level == "WARNING")
		return (2);
	if (level == "ERROR")
		return (3);
	return (-1);
}

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << (argc > 0 ? argv[0] : "harlFilter")
			<< " <LEVEL>" << std::endl;
		return (1);
	}

	Harl	harl;

	switch (levelToIndex(argv[1]))
	{
		case 0:
			harl.complain("DEBUG");
			// fall through
		case 1:
			harl.complain("INFO");
			// fall through
		case 2:
			harl.complain("WARNING");
			// fall through
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
			break ;
	}
	return (0);
}
