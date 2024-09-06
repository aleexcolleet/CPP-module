#include "Contact.hpp"

Contact::Contact(){

}

Contact::~Contact(){

}

//cin.ignore ignores the leftover newline '\n' after 
//sending the input
void Contact::init(void){
	std::cin.ignore();
	this->_firstName = this->_getInput("Please enter your first name");
	this->_nickName = this->_getInput("Come one enter your nickname");
	this->_darkestSecret = this->_getInput("now your darkest secret");
	this->_phoneNumber = this->_getInput("what's your phone number");
	this->_favouriteColor = this->_getInput("what's your favourite color");
	std::cout<<std::endl;
}

//this is an example of a getter
//because index is a private member.
//With this function we manage to fetch the 
//actual value and share it With
//the rest of the world.
void Contact::setIndex(int i){

	this->_index = i;
}

