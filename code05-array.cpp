#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int no[3];  // array with random numbers
    string name[3];

    for (int i = 0; i < 3; i++) {
        no[i] = i;
        cout << "no"
             << "[" << i << "]=" << no[i] << endl;
    }

    cout << "sizeof=" << sizeof(no) << endl;

    int no2[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++) {
        cout << "no2"
             << "[" << i << "]=" << no2[i] << endl;
    }

    int no3[20] = {0};
    for (int i = 0; i < 20; i++) {
        cout << "no3"
             << "[" << i << "]=" << no3[i] << endl;
    }

    int no4[20] = {};  // initialize all zeor array
    for (int i = 0; i < 20; i++) {
        cout << "no4"
             << "[" << i << "]=" << no4[i] << endl;
    }

    // clear array into all zero array
    memset(no4, 0, sizeof(no4));
    for (int i = 0; i < 20; i++) {
        cout << "no4"
             << "[" << i << "]=" << no4[i] << endl;
    }

    // copy
    int no5[sizeof(no4) / sizeof(int)];
    memcpy(no5, no4, sizeof(no4));
    for (int i = 0; i < 20; i++) {
        cout << "no5"
             << "[" << i << "]=" << no5[i] << endl;
    }

    return 0;
}
