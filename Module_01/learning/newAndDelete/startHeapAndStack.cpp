#include <iostream>
#include <string>

class Student{
	private:
		std::string _login;

	public:
		Student (std::string login) :_login(login){
			std::cout << "Student: " << this->_login << " is born" << std::endl;
		}
		~Student (){
			std::cout << "Student: " << this->_login << " is dead" << std::endl;
		}
};

int main(){
	Student bryian = Student("bryian");
	Student* trace = new Student("trace");

	delete trace;//jim is destroyed
	return (0);//bob is destroyed
}
