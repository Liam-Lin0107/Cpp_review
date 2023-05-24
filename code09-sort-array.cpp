#include <cstdlib>
#include <iostream>
using namespace std;

int compasc(const void *p1, const void *p2) {
    return *((int *)p1) - *((int *)p2);
}

int compdesc(const void *p1, const void *p2) {
    return *((int *)p2) - *((int *)p1);
}

int main(int argc, char *argv[]) {
    int a[8] = {4, 2, 7, 8, 9, 3, 5, 2};

    cout << "====================================" << endl;
    qsort(a, sizeof(a) / sizeof(int), sizeof(int), compasc);
    for (int i = 0; i < 8; i++) {
        cout << "a[" << i << "]=" << a[i] << endl;
    }
    cout << "====================================" << endl;
    qsort(a, sizeof(a) / sizeof(int), sizeof(int), compdesc);
    for (int i = 0; i < 8; i++) {
        cout << "a[" << i << "]=" << a[i] << endl;
    }
    return 0;
}
