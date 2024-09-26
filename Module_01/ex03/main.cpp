#include "HumanB.hpp"
#include "HumanA.hpp"

int main(){

	{
		Weapon club = Weapon("crude spiked club");
		std::cout << "////HUMANS AND WEAPONS////" << std::endl;

		//testing const
		club.announce();

		//testing getType
		const std::string& myReference = club.getType();
		std::cout << myReference << std::endl;

		//testing setType:
		club.setType("balls");
		club.announce();
	
	
		std::cout << "------HUMAN A-----" << std::endl;
		//testing HumanA
		//construct
		HumanA bob("Bob", club);
		//attack();
		bob.attack();
		//other
		//club.setType("some other type of club");
		bob.attack();


		std::cout << "-----HUMAN B----" << std::endl;
		//testing HUMANB
		HumanB jim("Jim");
		//testing null pointer
		jim.setWeapon(NULL);
		jim.attack();
		//testing valid pointer
		jim.setWeapon(&club);
		jim.attack();
		//testing how it changes as the structure
		//is pointing to. Differently to HumanA
		club.setType("some other type of club");
		jim.attack();	
	}
	return (0);
}
