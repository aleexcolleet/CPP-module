#include <iostream>
#include <string>

class Student{
	private:
		std::string _login;

	public:
		Student() :_login("ldefault"){
			std::cout << "Student: " << this->_login << " is born" << std::endl;
		}
		~Student(){
			std::cout << "Student: " << this->_login << " is dead" << std::endl;
		}
};

int main(){
	
	Student* students = new Student[5];
	
	delete [] students;
	return (0);
}
