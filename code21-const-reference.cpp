#include <iostream>
using namespace std;

// pass by value
void func1(const int no, const string str) {
    cout << "in function:\t\t"
         << "no: " << no << ", message: " << str << endl;
}
// pass by pointer
void func2(const int* no, const string* str) {
    cout << "in function:\t\t"
         << "no: " << *no << ", message: " << *str << endl;
}
// pass by reference
void func3(const int& no, const string& str) {
    cout << "in function:\t\t"
         << "no: " << no << ", message: " << str << endl;
}

int main(int argc, char* argv[]) {
    const int a = 10;
    // a = 20; // can't change a
    const int* pa = &a;  // need to specified const
    const int& ra = a;   // need to specified const

    func1(9, "Hi");  // ok
    // func2(&9, &"Hi");  // not ok, because rvalue has no address
    func3(9, "Hi");  // ok, because const reference will create a temporary
                     // varaible to the
                     // literal value. See the following
                     // const int &ra = 8;
                     // equal to the following
                     // cont int temp  = 8;
                     // const int &ra = temp;

    return 0;
}
