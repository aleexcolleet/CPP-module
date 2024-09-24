#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

//output for each zombie on announce function:
//<name>: BraiiiiiiinnnzzzZ...
//
//
//So I need to separe stack(randomChump) and Heat(newZombie). 
//
//Creo que necessito destructor para imprimir cuando se elimina un zombie en el stack.
class Zombie{
	private:
		std::string _name;

	public:
		Zombie(const std::string& name); //Constructor
		~Zombie();
		void announce() const;
};
	
Zombie*		newZombie(const std::string& name);
void		randomChump(const std::string& name);

#endif
