#include <string>
const std::string exlam = "!";
const std::string message = "Hello" + ", world" + exlam;
main(){}

// так делать нельзя, получаем error: invalid operands of types ‘const char [6]’ and ‘const char [8]’ to binary ‘operator+’