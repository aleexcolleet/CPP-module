#include <iostream>

int	main()
{
	//here I create and init my string, pointer to it and reference to it, respectively.
	std::string myString = "Hi this is brain";
	std::string* pointerToStr = &myString;
	std::string& referenceToStr = myString;
	
	//output its adress
	std::cout<<"Memory adress of str:      "<< &myString << std::endl;
	std::cout<<"Memory adress of ptr->str: "<< pointerToStr << std::endl;
	std::cout<<"Memory adrees of ref->str: "<< &referenceToStr << std::endl;

	std::cout<<std::endl;

	//output its values
	std::cout<<"Value for str:      "<< myString <<std::endl;
	std::cout<<"Value for ptr->str: "<< *pointerToStr <<std::endl;
	std::cout<<"Value for ref->str: "<< referenceToStr <<std::endl;

	return (0);
}
