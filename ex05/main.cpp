#include "Harl.hpp"

#include <iostream>

int	main(void)
{
	Harl	harl;

	std::cout << "--- complain(\"DEBUG\") ---" << std::endl;
	harl.complain("DEBUG");

	std::cout << "--- complain(\"INFO\") ---" << std::endl;
	harl.complain("INFO");

	std::cout << "--- complain(\"WARNING\") ---" << std::endl;
	harl.complain("WARNING");

	std::cout << "--- complain(\"ERROR\") ---" << std::endl;
	harl.complain("ERROR");

	std::cout << "--- complain(\"NOPE\") (unknown, prints nothing) ---" << std::endl;
	harl.complain("NOPE");
	std::cout << "(end of unknown)" << std::endl;

	return (0);
}
