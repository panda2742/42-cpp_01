#include "HumanB.hpp"

// Constructors & Destructors
HumanB::HumanB(const std::string &name)
	: _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB()
{}

// Methods
void HumanB::attack()
const {
	if (_weapon == NULL)
	{
		std::cout << getName() << " has no weapon to attack with!" << std::endl;
		return;
	}
	std::cout << getName() << " attacks with their " << getWeapon()->getType() << std::endl;
}

// Getters
const Weapon *HumanB::getWeapon()
const {
	return _weapon;
}

const std::string &HumanB::getName()
const {
	return _name;
}

// Setters
void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::setName(const std::string &name)
{
	_name = name;
}


