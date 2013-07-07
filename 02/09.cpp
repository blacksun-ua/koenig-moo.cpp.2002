#include <iostream>
#include <cmath>


using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[])
{
    int a = 0, b = 0;
    cout << "Enter two numbers: \n";
    cin >> a >> b;

    if(a == b)
        cout << "Numbers are equal" << endl;
    else
        cout << "Number " << std::max(a, b) << " is greather" << endl;

    return 0;
}
