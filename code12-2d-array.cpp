#include <cstring>
#include <iostream>
using namespace std;

void print3darray(int (*arr)[3][2], int d) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main(int argc, char* argv[]) {
    int arr[2][3] = {{11, 12, 13}, {21, 22, 23}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "arr[" << i << "]"
                 << "[" << j << "]=" << arr[i][j] << endl;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "&arr[" << i << "]"
                 << "[" << j << "]=" << (long long)&arr[i][j] << endl;
        }
    }

    // using 2D array as 1D array
    int* p = (int*)arr;
    for (int i = 0; i < 6; i++) {
        cout << *(p + i) << endl;
    }

    cout << "========================" << endl;
    // copy
    int arr2[6] = {0};
    memcpy(arr2, arr, sizeof(arr));
    for (int i = 0; i < 6; i++) {
        cout << arr2[i] << endl;
    }
    cout << "========================" << endl;
    // clear 2D array
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < 6; i++) {
        cout << *(p + i) << endl;
    }

    cout << "======array pointer=========" << endl;
    int arr3[2][3] = {{11, 12, 13}, {21, 22, 23}};
    int(*pr)[3] = arr3;
    cout << (long long)arr3 << endl;
    cout << (long long)pr << endl;
    cout << (long long)(arr3 + 1) << endl;
    cout << (long long)(pr + 1) << endl;

    cout << "======3d array==========" << endl;
    // int arr4[2][3][2] = {1}; // wrong way, only set the first value
    int arr4[2][3][2];
    memset(arr4, 0, sizeof(arr4));  // correct way
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                cout << arr4[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << "=====3d array potiner =====" << endl;
    int(*pp)[3][2] = arr4;
    cout << (long long)pp << endl;
    cout << (long long)(pp + 1) << endl;
    cout << (long long)(pp + 2) << endl;
    print3darray(arr4, 2);
    return 0;
}
