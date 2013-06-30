#include <iostream>
#include <string>
int main()
{
	{ const std::string s = "one row"; 
	  std::cout << s << std::endl;

	{ const std::string s = "another string";
	  std::cout << s << std::endl; }}
	return 0;
}

// если }} заменить на };}, то ничего не произойдет, т.к. пустое выражение допустимо в С++
// но так делать - это плохой стиль
