#include "harl_utils.hpp"
#include "Harl.hpp"

// Constructors & Destructors
Harl::Harl() {}

Harl::~Harl() {}

// Methods
void Harl::complain(std::string level) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*handlers[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	int			index = -1;
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			index = i;
			break;
		}
	}

	switch (index) {
		case 0:
			(this->*handlers[0])();
		case 1:
			(this->*handlers[1])();
		case 2:
			(this->*handlers[2])();
		case 3:
			(this->*handlers[3])();
			break;
		default:
			std::cout << BRED "Unknown level of complaint." << std::endl;
	}
}

// Private methods
void Harl::debug() {
	std::cout << BMAGENTA "I love having extra bacon for my "
	"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	RESET << std::endl;
}

void Harl::info() {
	std::cout << BBLUE "I cannot believe adding extra bacon costs more money. "
	"You didn't put enough bacon in my burger! If you did, I wouldn't be asking"
	" for more!" RESET << std::endl;
}

void Harl::warning() {
	std::cout << BYELLOW "I think I deserve to have some extra bacon for free. "
	"I've been coming for years whereas you started working here since last "
	"month." RESET << std::endl;
}

void Harl::error() {
	std::cout << BRED "This is unacceptable! "
	"I want to speak to the manager now." RESET << std::endl;
}
