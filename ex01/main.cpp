#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;

	std::cout << "--- Creating a horde of " << N << " zombies ---" << std::endl;
	Zombie*	horde = zombieHorde(N, "Horde");

	if (!horde)
	{
		std::cout << "zombieHorde returned NULL." << std::endl;
		return (1);
	}

	std::cout << std::endl << "--- Announcing the horde ---" << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].announce();

	std::cout << std::endl << "--- Releasing the horde ---" << std::endl;
	delete[] horde;

	std::cout << std::endl << "--- Edge case: N = 0 ---" << std::endl;
	Zombie*	empty = zombieHorde(0, "Empty");
	std::cout << "Result: " << (empty ? "non-NULL" : "NULL") << std::endl;
	delete[] empty;

	return (0);
}
