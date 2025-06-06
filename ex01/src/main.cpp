#include "Zombie.hpp"
#include <cmath>

Zombie *zombieHorde(int N, std::string name);

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Expecting three arguments." << std::endl;
		return 1;
	}
	int			hordeSize = atoi(argv[1]);
	std::string	name = argv[2];

	std::cout << std::endl << "Creating the horde..." << std::endl << std::endl;
	Zombie *horde = zombieHorde(hordeSize, name);

	if (!horde)
		return 1;

	for (int i = 0; i < hordeSize; i++)
	{
		std::cout << BMAGENTA "[" << i << "] Zombie " << &horde[i]
				<< ":" RESET << std::endl;
		horde[i].announce();
	}

	std::cout << std::endl << "Killing the horde..." << std::endl << std::endl;
	delete[] horde;

	return 0;
}
