#include "Zombie.hpp"
#include <iostream>

// Constructors & Destructors
Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout << "Zombie is now destroyed." << std::endl;
}

// Methods
void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Getters
const std::string &Zombie::getName() const
{
	return _name;
}

// Setters
void Zombie::setName(const std::string &name)
{
	_name = name;
}
