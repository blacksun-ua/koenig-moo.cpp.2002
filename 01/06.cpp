#include <iostream>
#include <string>

int main()
{
	std::cout << "What is your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name 
			  << std::endl << "And what is your name? ";
	std::cin >> name;
	std::cout << "Hello, " << name
			  << "; it's nice to meet you!"
			  << std::endl;
	return 0;
}
