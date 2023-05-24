#include <iostream>

using namespace std;

int* func() {
    int a = 3;
    return &a;
}

int main() {
    // situation 1: manually point
    int* p = (int*)0x0094278345;
    cout << "p=" << p << ", *p=" << *p << endl;

    // situation 2: use uninitialized pointer
    int* p2;
    cout << "p2=" << p2 << ", *p=" << *p2 << endl;

    // situation 3: use pointer after free
    int* p3 = new int(3);
    cout << "p3=" << p3 << "*p3=" << *p3 << endl;
    delete p3;
    cout << "p3=" << p3 << "*p3=" << *p3 << endl;

    // situation passing the pointer whose content is outscoped.
    int* p4 = func();
    cout << "p4=" << p4 << "*p3=" << *p4 << endl;

    return 0;
}
