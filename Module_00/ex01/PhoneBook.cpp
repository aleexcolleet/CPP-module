#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){

}

PhoneBook::~PhoneBook(){


}
//so that each time I call it, 
//it adds a contact and does i++
//so that I can call it back and add 
//another contact after.
//In the case I wanted to add more
//that 8, the module would simply make it 
//be the 0 position on the array of contacts.
void PhoneBook::addContact(void){
	static int i;
	this->_contacts[i % 8].init();
	this->_contacts[i % 8].setIndex(i % 8);
	i++;
}

void PhoneBook::printContacts(void) const{
	std::cout<<"I------------------PHONEBOOK CONTACTS-----------I"<< std::endl;
	for (int i = 0; i < 8; i++){
		this->_contacts[i].view(i);
	}
}


void	PhoneBook::welcome(void) const{
	std::cout << "\033[1;34m" << std::endl;  // Bold Blue
	std::cout << " _____ _               _____         _   "  << std::endl;
    std::cout << "|  _  | |_ ___ ___ ___| __  |___ ___| |_  " << std::endl;
    std::cout << "|   __|   | . |   | -_| __ -| . | . | '_| " << std::endl;
    std::cout << "|__|  |_|_|___|_|_|___|_____|___|___|_,_|" << std::endl;
    std::cout << "\033[0m" << std::endl;  // Reset color

    std::cout << "\033[1;33m--------------USAGE---------------\033[0m" << std::endl;  // Bold Yellow
    std::cout << "\033[1;36mADD\t: To add a contact.\033[0m" << std::endl;  // Bold Cyan
    std::cout << "\033[1;36mSEARCH\t: To search for a contact.\033[0m" << std::endl;
    std::cout << "\033[1;36mEXIT\t: To quit the PhoneBook.\033[0m" << std::endl;
    std::cout << "\033[1;33m----------------------------------\033[0m" << std::endl;
    std::cout << std::endl;
}
