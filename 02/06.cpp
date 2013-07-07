#include <iostream>

// Выводит в столбик числа от 1 до 10 включительно

int main(int argc, char* argv[])
{
    int i = 0;
    while(i < 10) {
        i += 1;
        std::cout << i << std::endl;
    }
    return 0;
}
