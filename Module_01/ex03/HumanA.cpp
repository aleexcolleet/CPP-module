#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon WeaponOfA) : _name(name), _WeaponOfA(WeaponOfA){}

HumanA::~HumanA(){}

void HumanA::attack(){
	std::cout << this->_name << " attacks with their " << _WeaponOfA.getType() << std::endl;
}
