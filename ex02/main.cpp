#include <iostream>

int main() {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "\033[1;35m(&) string\033[0m    = " << &string    << std::endl;
	std::cout << "\033[1;35mstringPTR\033[0m     = " << stringPTR  << std::endl;
	std::cout << "\033[1;35m(&) stringREF\033[0m = " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "\033[1;35mstring\033[0m        = " << string     << std::endl;
	std::cout << "\033[1;35m(*) stringPTR\033[0m = " << *stringPTR << std::endl;
	std::cout << "\033[1;35mstringREF\033[0m     = " << stringREF  << std::endl;
}
