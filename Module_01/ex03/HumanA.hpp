#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	private:
		std::string _name;
		Weapon& _WeaponOfA;
	
	public:
		HumanA(std::string name, Weapon& WeapA);
		~HumanA();
		void attack();
};

#endif
