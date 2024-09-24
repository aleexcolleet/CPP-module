#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	
	Zombie *zombieGroup = new Zombie[N];

	for (int i = 0; i < N ; i++){
		zombieGroup[i].set_name(name);	
	}
	return (zombieGroup);
}
