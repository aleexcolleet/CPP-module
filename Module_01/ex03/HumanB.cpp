#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){}

HumanB::~HumanB(){

	
}

void HumanB::setWeapon(Weapon* WeapB){

	this->_WeaponOfB = WeapB;

}

void HumanB::attack(){
	if (this->_WeaponOfB)
		std::cout << this->_name << " attacks with their " << _WeaponOfB->getType() << std::endl;
	else
		std::cout << "there is no weapon selected for HUMAN B 💀" << std::endl;
	
}
