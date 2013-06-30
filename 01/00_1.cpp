// Запрашиваем имя человека и приветствуем его
#include <iostream>
#include <string>
int main()
{
	// Запрашиваем имя человека
	std::cout << "Enter your name, please:";

	// Считываем введенное имя
	std::string name;	// Определяем переменную name
	std::cin >> name;	// Считывем данные в переменную name

	// Выводим приветствие
	std::cout << "Hello, " << name << "!" << std::endl;
	return 0;
}
