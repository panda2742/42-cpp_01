#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB {
	public:
	// Constructors & Destructors
	HumanB(const std::string &name);
	~HumanB();

	// Methods
	void attack() const;

	// Getters
	const Weapon *getWeapon() const;
	const std::string &getName() const;

	// Setters
	void setWeapon(Weapon &weapon);
	void setName(const std::string &name);

	private:
	// Attributes
	Weapon		*_weapon;
	std::string	_name;
};

#endif