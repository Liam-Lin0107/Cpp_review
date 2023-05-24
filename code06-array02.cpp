#include <iostream>
#include <iterator>

using namespace std;

int main() {
    // char a;
    // cout << "sizeof(char)=" << sizeof(char) << endl;
    // short b;
    // cout << "sizeof(short)=" << sizeof(short) << endl;
    // int c;
    // cout << "sizeof(int)=" << sizeof(int) << endl;
    // double d;
    // cout << "sizeof(double)=" << sizeof(double) << endl;
    //
    // cout << "&a=" << (void*)&a << endl;
    // cout << "&a=" << (void*)(&a + 1) << endl;
    //
    // cout << "&b=" << (void*)&b << endl;
    // cout << "&b=" << (void*)(&b + 1) << endl;
    //
    // cout << "&c=" << (void*)&c << endl;
    // cout << "&c=" << (void*)(&c + 1) << endl;
    //
    // cout << "&d=" << (void*)&d << endl;
    // cout << "&d=" << (void*)(&d + 1) << endl;

    int a[] = {3, 5, 6, 8, 9};
    cout << "a[0]=" << (long)a << endl;
    cout << "&a[0]=" << (long)&a[0] << endl;
    cout << "&a[1]=" << (long)&a[1] << endl;
    cout << "&a[2]=" << (long)&a[2] << endl;
    cout << "&a[3]=" << (long)&a[3] << endl;

    int* p = a;
    cout << "p=" << (long)p << endl;
    cout << "p+1=" << (long)(p + 1) << endl;
    cout << "*(p+1)=" << *(p + 1) << endl;

    // Note: sizeof don't treet array name as pointer
    // array name is constant can't chang, but pointer can change
    cout << "sizeof(a)=" << sizeof(a) << endl;
    cout << "sizeof(p)" << sizeof(p) << endl;
    // a++ // error
}
