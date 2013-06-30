#include <cstdlib>
#include <iostream>


int main(int argc, char* argv[])
{
	long res = 1;
	for(int i = 1; i <= 10; ++i)
		res *= i;
	std::cout << res << std::endl;
	int divide_to_zero = atoi(argv[1])/atoi(argv[2]);
	std::cout << divide_to_zero << std::endl;
	return 0;
}
