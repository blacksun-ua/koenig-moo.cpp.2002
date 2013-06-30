#include <iostream>
#include <string>

int main()
{
// 	{ std::string s = "one string";
// 	{ std::string x = s + ", really";
// 	  std::cout << s << std::endl; }
// 	  std::cout << x << std::endl; // error: ‘x’ was not declared in this scope
// 	}
	
	// fixed variant
	{ std::string s = "one string";
	  std::cout << s << std::endl;
	{ std::string x = s + ", really";
	  std::cout << x << std::endl;
	}}

	return 0;
}
