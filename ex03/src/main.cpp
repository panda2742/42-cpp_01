# include "HumanA.hpp"
# include "HumanB.hpp"
# include "Weapon.hpp"

int main()
{
	try
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);

		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	catch (const std::exception& e)
	{
		std::cout << "\e[38;2;255;0;0m" << e.what() << "\e[0m" << std::endl;
	}
	try
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim("Jim");

		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	catch (const std::exception& e)
	{
		std::cout << "\e[38;2;255;0;0m" << e.what() << "\e[0m" << std::endl;
	}
}
