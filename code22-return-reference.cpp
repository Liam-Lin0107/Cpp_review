#include <iostream>
using namespace std;

// return local varable reference is dangling reference(dangling pointer)
// int& fun() {
//     int ii = 200;
//     return ii;
// }

int& fun(int& ra) {
    ra++;
    return ra;
}

int main(int argc, char* argv[]) {
    // int& b = fun();
    // cout << "b=" << b << endl;
    int a = 10;
    int& b = fun(a);
    cout << "a=" << a << ", b=" << b << endl;
    cout << "&a=" << &a << ", &b=" << &b << endl;
    return 0;
}
