#include "Zombie.hpp"

Zombie::Zombie(){

};

Zombie::~Zombie(){
	std::cout<<this->_name<<": was destroyed"<<std::endl;
};

void Zombie::set_name(std::string name){
	this->_name = name;
}

void Zombie::announce(void){
	std::cout<<this->_name<<": braaaaainzzzz"<<std::endl;
}
