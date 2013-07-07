#include <cstdlib>
#include <iostream>


int main(int argc, char* argv[])
{
    int res = 1;
    for(int i = 1; i < 10; ++i)
		res *= i;
	std::cout << res << std::endl;
	return 0;
}
