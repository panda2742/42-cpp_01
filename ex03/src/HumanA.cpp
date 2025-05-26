#include "HumanA.hpp"

// Constructors & Destructors
HumanA::HumanA(const std::string &name, Weapon &weapon) : _weapon(weapon), _name(name) {}

HumanA::~HumanA() {}

// Methods
void HumanA::attack() const {
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}

// Getters
const Weapon &HumanA::getWeapon() const {
	return _weapon;
}

const std::string &HumanA::getName() const {
	return _name;
}

// Setters
void HumanA::setWeapon(const Weapon &weapon) {
	_weapon = weapon;
}

void HumanA::setName(const std::string &name) {
	_name = name;
}


