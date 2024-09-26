#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
class HumanB{

	private:
		std::string _name;
		Weapon* _WeaponOfB;
		

	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon* WeaponOfB);
		
};

#endif
