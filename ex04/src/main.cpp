#include "dumb_sed_utils.hpp"
#include "DumbSed.hpp"
#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << BRED "Expected EXACTLY 3 arguments." << std::endl
					<< "Format: ./<program> <filename> <s1> <s2>" RESET << std::endl;
		return 1;
	}

	DumbSed	dumbsed(argv[1], argv[2], argv[3]);

	if (!dumbsed.openFiles())
		return 1;

	dumbsed.execute();

	return 0;
}
