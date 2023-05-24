#include <iostream>

using namespace std;

void mySwap(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void mySwap(string& str1, string& str2) {
    string temp = str1;
    str1 = str2;
    str2 = temp;
}

int main(int argc, char* argv[]) {
    int a = 10;
    int b = 20;
    mySwap(&a, &b);
    cout << "a=" << a << ", b=" << b << endl;

    string s1 = "HiHi";
    string s2 = "Lima";
    mySwap(s1, s2);
    cout << "s1=" << s1 << ", s2=" << s2 << endl;
    return 0;
}
