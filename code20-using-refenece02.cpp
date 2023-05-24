#include <iostream>

using namespace std;
// using second pointer
void create_int_in_heap(int** p) { *p = new int(10); }

// using pointer reference
void create_int_in_heap2(int*& p) { p = new int(20); }

int main(int argc, char* argv[]) {
    int* p = nullptr;
    int* p2 = nullptr;

    create_int_in_heap(&p);
    cout << "*p: " << *p << endl;

    create_int_in_heap2(p2);
    cout << "*p2: " << *p2 << endl;

    return 0;
}
