#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook{
	private:
		Contact	_contacts[8]:
		int		_readInput(void) const;

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	welcome(void) const;
};

#endif
