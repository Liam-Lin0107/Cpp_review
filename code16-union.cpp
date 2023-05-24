#include <iostream>
using namespace std;

union Udata {
    int a;
    double b;
    char c[21];
};

int main(int argc, char *argv[]) {
    Udata data;  // Note: Union has memory alignment align with 8byte
    cout << "sizeof(Udata): " << sizeof(Udata) << endl;
    cout << "&data.a" << &data.a << endl;
    cout << "&data.a" << &data.b << endl;
    cout << "&data.a" << &data.c << endl;
    return 0;
}
