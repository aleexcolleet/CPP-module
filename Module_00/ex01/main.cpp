#include "Phonebook.hpp"
#include <iostream>
#include <limits>

int main(){
	PhoneBook book;
	std::string input = "";
	book.welcome();
	while (input.compare("EXIT")){
		if (input.compare("ADD") == 0)
			book.addContact();
		else if (input.compare("SEARCH") == 0){
		
			
		}

	}
}
