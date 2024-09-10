#include "Contact.hpp"

Contact::Contact(){

}

Contact::~Contact(){

}

std::string Contact::_getInput(std::string str) const {
    std::string input = "";
    bool        valid = false;
    while(!valid)
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            valid = true;
        else {
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
        }
    }
    return (input);
}

//cin.ignore ignores the leftover newline '\n' after 
//sending the input
void Contact::init(void){
	std::cin.ignore();
	this->_firstName = this->_getInput("Please enter your first name:  ");
	this->_nickName = this->_getInput("Come one enter your nickname:  ");
	this->_darkestSecret = this->_getInput("now your darkest secret:  ");
	this->_phoneNumber = this->_getInput("what's your phone number:  ");
	this->_favouriteColor = this->_getInput("what's your favourite color:  ");
	std::cout << std::endl;
}

std::string Contact::_printLen(std::string str) const{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

//this is an example of a getter
//because index is a private member.
//With this function we manage to fetch the 
//actual value and share it With
//the rest of the world.
void Contact::setIndex(int i){

	this->_index = i;
}

//here I'm just printing the private values from
//contacts object. I check is there's any empty value
//with the C++ default function first.
void Contact::view(int index) const{
	if (this->_firstName.empty() || this->_nickName.empty() || this->_darkestSecret.empty() ||
			this->_phoneNumber.empty() || _favouriteColor.empty())
		return ;
	std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_firstName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_nickName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_darkestSecret) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_phoneNumber) << std::flush;
	std::cout << "|" << std::setw(10) << this->_printLen(this->_favouriteColor) << std::flush;
	std::cout << "|" << std::endl;
}

void Contact::display(int index) const{
	if (this->_firstName.empty() || this->_nickName.empty() || this->_darkestSecret.empty() ||
			this->_phoneNumber.empty() || _favouriteColor.empty())
		return ;
	std::cout << std::endl;
	std::cout << "------> Contact #" << index <<"<------" << std::endl;
	std::cout << "First Name:\t" << this->_firstName << std::endl;
	std::cout << "Nick Name:\t" << this->_nickName << std::endl;
	std::cout << "Darkest Secret:\t" << this->_darkestSecret << std::endl;
	std::cout << "Phone Number:\t" << this->_phoneNumber << std::endl;
	std::cout << "Favourite Color:\t" << this->_favouriteColor << std::endl;
	std::cout << std::endl;
}
