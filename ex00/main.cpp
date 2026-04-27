#include "Zombie.hpp"

int	main(void)
{
	std::cout << "--- Heap zombie (newZombie) ---" << std::endl;
	Zombie*	heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;

	std::cout << std::endl << "--- Stack zombie (randomChump) ---" << std::endl;
	randomChump("StackZombie");

	std::cout << std::endl << "--- End of main ---" << std::endl;
	return (0);
}
