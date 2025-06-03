#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
	// Constructors & Destructors
	HumanA(const std::string &name, Weapon &weapon);
	~HumanA();

	// Methods
	void attack() const;

	// Getters
	const Weapon &getWeapon() const;
	const std::string &getName() const;

	// Setters
	void setWeapon(const Weapon &weapon);
	void setName(const std::string &name);

	private:
	// Attributes
	Weapon		&_weapon;
	std::string	_name;
};

#endif