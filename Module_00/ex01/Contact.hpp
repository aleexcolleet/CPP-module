#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact{
	private:
		std::string	_firstName;
		std::string	_nickname;
		std::string	_darkestSecret;
		std::string	_phoneNumber;
		std::string	_favouriteColor;
		int			_index;

	public:
		Contact();
		~Contact();
		void		init(void);
		void		setIndex(int i);

};

#endif
