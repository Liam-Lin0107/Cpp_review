#include <iostream>
using namespace std;

enum Color {
    yellow,
    blue,
    red,
};

int main(int argc, char *argv[]) {
    Color color = Color::yellow;
    cout << color << endl;

    switch (color) {
        case Color::yellow:
            cout << "yellow" << endl;
            break;
        case Color::blue:
            cout << "yellow" << endl;
            break;
        case Color::red:
            cout << "red" << endl;
            break;
    }
    return 0;
}
