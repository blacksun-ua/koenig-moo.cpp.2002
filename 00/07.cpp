#include <iostream>
int main()
{
	/* Этот комментарий может занимать несколько строк, поскольку
	в качестве начальног ои конечного ограничителей он использут 
	символы /* и */. */
	std::cout << "Этот вариант программы будет работать?"
			  << std::endl;
	return 0;
}

// нет, не будет даже компилироватся, потому что после первого */ нет еще одного /*
