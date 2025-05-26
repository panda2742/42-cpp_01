#include "Weapon.hpp"

// Constructors & Destructors
Weapon::Weapon(const std::string &type) : _type(type) {}

Weapon::~Weapon() {}

// Getters
const std::string &Weapon::getType() const {
	return _type;
}

// Setters
void Weapon::setType(const std::string &type) {
	_type = type;
}
