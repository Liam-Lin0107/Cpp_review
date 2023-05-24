#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int a = 100;
    int &ra = a;

    cout << "a: " << a << endl;
    cout << "ra: " << ra << endl;

    cout << "&a: " << &a << endl;
    cout << "&ra: " << &ra << endl;

    int b = 5;
    ra = b;  // Note: ra won't reference to b
    cout << "a: " << a << endl;
    cout << "ra: " << ra << endl;
    // Note: reference is const ponter
    // reference: int& ra = a;
    // const pointer: int* const ra = &a; // it can't change the object which is
    // point to.
    // compiler will change reference to pointer const.
    int *const cpa = &a;
    cout << "*cpa: " << *cpa << endl;  // is cout << "a: " << a << endl;
    cout << "cap: " << cpa << endl;    // is cout << "&a: "  << &a << endl;
    return 0;
}
