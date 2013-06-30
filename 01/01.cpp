#include <iostream>
#include <string>

const std::string hello = "Hello";
const std::string message = hello + ", world" + "!";

int main()
{
std::string hello1 = "Hello";
std::string message1 = hello + ", world" + "!";
std::string message2 = hello + "1" + "2" + "3" + "4" + "5";
std::cout << message2 << std::endl;
}

// работать будет, поскольку hello + ", world" дает string, поэтому дальше можно десять 
// строковых литералов конкатенировать.