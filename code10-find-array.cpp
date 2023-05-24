#include <iostream>
using namespace std;

int search(int arr[], int len, int target) {
    int p1 = 0;
    int p2 = len - 1;

    while (p1 <= p2) {
        int mid = p1 + (p2 - p1) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            p1 = mid + 1;
        } else {
            p2 = mid - 1;
        }
    }
    return -1;
}

int main(int argc, char* argv[]) {
    int* arr = new int[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
        cout << "arr[" << i << "]=" << arr[i] << endl;
    }

    cout << search(arr, 10, 3) << endl;
    return 0;
}
