#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->_name << " is rising from the grave." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiinnnzzzZ..." << std::endl;
}
