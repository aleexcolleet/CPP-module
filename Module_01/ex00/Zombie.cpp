#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string& name) :_name(name){}

Zombie::~Zombie() {
  std::cout <<_name << " died\n";
}

void Zombie::announce(void) const {
	std::cout<<_name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
