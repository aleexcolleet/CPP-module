#include "Weapon.hpp"

Weapon::Weapon(std::string typeOfWeapon): _type(typeOfWeapon){}

Weapon::~Weapon(){}

const std::string& Weapon::getType(){

	std::string& t1 = this->_type;
	return (t1);
}

void Weapon::setType(std::string newType){

	this->_type = newType;
	return ;
}
