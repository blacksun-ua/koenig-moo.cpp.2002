#include <iostream>
#include <string>


using std::cout;
using std::endl;


void draw_rectangle(int a, int b, bool filed = true)
{
    for(int i = 0; i != a; ++i) {
        for(int j = 0; j != b; ++j)
            if(filed || i == 0 || i == a - 1 || j == 0 || j == b - 1)
                cout << '*';
            else
                cout << ' ';
        cout << '\n';
    }
    cout << endl;
}

void draw_triangle(int a, int b, bool filed = true) {
    for(int i = 0; i != a; ++i, --b) {
        for(int j = 0; j != b; ++j)
            if(filed || i == 0 || i == a - 1 || j == 0 || j == b - 1)
                cout << '*';
            else
                cout << ' ';
        cout << '\n';
    }
    cout << endl;
}

int main(int argc, char* argv[])
{
    draw_rectangle(5, 10);
    draw_rectangle(6, 6, false);
    draw_triangle(5, 5, false);


    return 0;
}
