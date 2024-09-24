#include "Zombie.hpp"

int main(){

	int N;
	std::string name;

	name = "wiliam";
	N = 20;
	Zombie* zombieGroup;
	zombieGroup = zombieHorde(N, name);
	if (!zombieGroup)
		return (1);
	for(int i = 0; i < N; i++){
		zombieGroup[i].announce();
	}
	delete [] zombieGroup;
	return (0);
}
