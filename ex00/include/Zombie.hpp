#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
	// Constructors & Destructors
	Zombie();
	~Zombie();

	// Methods
	void announce();

	// Getters
	const std::string &getName() const;

	// Setters
	void setName(const std::string &name);

	private:
	// Attributes
	std::string _name;
};

#endif
