#include "harl_utils.hpp"
#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;

	if (argc != 2) {
		std::cerr << BRED "I expected one arguments!" RESET << std::endl;
		return 1;
	}

	harl.complain(argv[1]);
}