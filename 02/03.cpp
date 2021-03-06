#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main(int argc, char* argv[])
{
    cout << "Please, enter your name: ";

    string name;
    cin >> name;

    string greeting = "Hello, " + name + "!";

    // set default values
    int vertical_pad = 1;
    int horizontal_pad = 1;

    cout << "Enter number of vertical pads: ";
    cin >> vertical_pad;
    cout << "Enter number of horizontal pads: ";
    cin >> horizontal_pad;

    const int rows = 2*vertical_pad + 3;
    const string::size_type cols = 2*horizontal_pad + greeting.size() + 2;

    for(int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while(c != cols) {
            if(r == vertical_pad + 1 && c == horizontal_pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << '*';
                else
                    cout << ' ';
                ++c;
            }
        }
        cout << '\n';
    }

    return 0;
}
