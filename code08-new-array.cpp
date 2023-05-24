#include <iostream>
#include <new>
using namespace std;

int main(int argc, char* argv[]) {
    int* arr = new int[8];

    // for (int i = 0; i < 8; i++) {
    //     arr[i] = 100 + i;
    //     cout << "arr[" << i << "]=" << arr[i] << endl;
    // }

    delete[] arr;
    arr = nullptr;
    // Best practice: after delete need to set pointer to nullptr
    // because double delete nullptr is neglect to compiler, avoiding double
    // free.

    // deal with very large array
    // fail to allocate will return nullptr
    int* a = new (std::nothrow) int[10000000001];
    if (a == nullptr) {
        cout << "fail to allocate memory" << endl;
    } else {
        a[10000000000] = 20;
    }
    return 0;
}
