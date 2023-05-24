#include <iostream>

using namespace std;

void create_int_heap(int **p);
int main(int argc, char *argv[]) {
    // int* p = new int(5);
    // std::cout << "*p=" << *p << std::endl;
    //
    // *p = 8;
    // std::cout << "*p=" << *p << std::endl;
    //
    // int ii = 8;
    // cout << "ii=" << ii << ", address of ii=" << &ii << endl;
    // int* pii = &ii;
    // cout << "pii=" << pii << ", address of pii="  << &pii << endl;
    //
    // int** ppii = &pii;
    // cout << "ppii=" << ppii << ", *ppii" << *ppii << endl;

    int *p = 0;
    create_int_heap(&p);
    cout << "p=" << p << ", *p=" << *p << endl;

    return 0;
}

// Note: awaring the difference betweent changing pointer itself and changing
// content which pointer pointer to.
void create_int_heap(int **p) {
    int **pp = p;
    *pp = new int(3);

    cout << "pp=" << pp << ", *pp=" << *pp << endl;
}
