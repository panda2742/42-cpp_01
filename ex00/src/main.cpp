#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main() {
	static std::string	names[4] = {"Alvin", "Fred", "John", "Kevin"};

	std::cout << "---------- [HEAP ALLOCATED] ----------" << std::endl;
	// Let's create some zombies we can delete, allocated in the heap
	for (int i = 0; i < 4; i++) {
		Zombie *generatedZombie = newZombie(names[i % 4]);
		// We announce it
		generatedZombie->announce();
		// We delete it
		delete generatedZombie;
	}
	std::cout << "---------- [STACK ALLOCATED] ---------" << std::endl;

	// Let's spawn some zombies, stuck in their local function scope,
	// automatically destroyed.
	for (int i = 0; i < 4; i++)
		randomChump(names[i % 4]);

	return (0);
}
