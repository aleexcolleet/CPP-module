#include <iostream>

int main(int ac, char **av){
	
	if (ac == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDbACK NOISE *";
	else {
		for (int i = 1; av[i]; i++){
			for(int j = 0; av[i][j]; j++)
				std::cout<<(char) toupper(av[i][j]);
			if (i < ac - 1)
			std::cout<<' ';
		}
	}
	std::cout<<std::endl;
	return (0);
}
