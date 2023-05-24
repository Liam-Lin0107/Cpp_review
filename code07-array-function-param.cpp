#include <iostream>
using namespace std;

void func(int arr[], int len) {
    // in func param treet arr as pointer => get sizeof(arr) = 8
    // for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
    //     cout << "arr[" << i << "]=" << arr[i] << endl;
    // }
    for (int i = 0; i < len; i++) {
        cout << "arr[" << i << "]=" << arr[i] << endl;
    }
}

int main(int argc, char *argv[]) {
    int a[5] = {3, 6, 8, 5, 3};

    func(a, sizeof(a) / sizeof(int));
    // in main function treet a as array name => get sizeof(a) = 5 * 4
    cout << "sizeof(a)=" << sizeof(a) << endl;
    return 0;
}
