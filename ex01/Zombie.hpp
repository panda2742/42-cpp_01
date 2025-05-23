#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define BMAGENTA	"\033[1;35m"
# define RESET		"\033[0m"

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
