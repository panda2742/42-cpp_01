#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	public:
	// Constructors & Destructors
	Weapon(const std::string &type);
	~Weapon();

	// Getters
	const std::string &getType() const;

	// Setters
	void setType(const std::string &type);

	private:
	// Attributes
	std::string	_type;
};

#endif