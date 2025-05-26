#include "Zombie.hpp"
#include <cmath>

Zombie *zombieHorde(int N, std::string name);

int main() {
	int			hordeSize;
	std::string	name;

	std::cout << "How many zombies do you want? ";
	std::cin >> hordeSize;
	hordeSize = abs(hordeSize);
	std::cout << "What's their name? ";
	std::cin >> name;

	std::cout << std::endl << "Creating the horde..." << std::endl << std::endl;

	Zombie *horde = zombieHorde(hordeSize, name);

	for (int i = 0; i < hordeSize; i++) {
		std::cout << BMAGENTA "[" << i << "] Zombie " << &horde[i]
				<< ":" RESET << std::endl;
		horde[i].announce();
	}

	std::cout << std::endl << "Killing the horde..." << std::endl << std::endl;

	delete[] horde;

	return (0);
}
