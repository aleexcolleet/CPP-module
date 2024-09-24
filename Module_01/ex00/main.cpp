#include "Zombie.hpp"

int main(){

	//creating zombie an auto announcin on STACK
	randomChump("Marcos");

	//create zombie and allocate on HEAP. Then I announce _name cause.
	Zombie* zomb1 = newZombie("Martin"); //create and return the pointer
	zomb1->announce(); //announce
	delete zomb1;// delete and dealloc
	
	
	return (0);
}
