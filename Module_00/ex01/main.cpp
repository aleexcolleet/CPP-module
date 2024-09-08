#include "PhoneBook.hpp"
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
			book.printContacts();
			book.search();
		}
		std::cout << "->>" << std::flush;
		std::cin >> input;
	}
	return 0;
}
