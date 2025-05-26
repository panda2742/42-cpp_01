#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
	public:
	// Constructors & Destructors
	Harl();
	~Harl();

	// Methods
	void complain(std::string level);

	private:
	// Methods
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif