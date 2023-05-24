#include <iostream>
using namespace std;
// pass by value
void func1(int no, string str) {
    no = 8;
    str = "Hi!!!!";
    cout << "in function:\t\t"
         << "no: " << no << ", message: " << str << endl;
}
// pass by pointer
void func2(int* no, string* str) {
    *no = 20;
    *str = "Hi!!!!!";
    cout << "in function:\t\t"
         << "no: " << *no << ", message: " << *str << endl;
}
// pass by reference
void func3(int& no, string& str) {
    no = 40;
    str = "Liam Hi!!!";
    cout << "in function:\t\t"
         << "no: " << no << ", message: " << str << endl;
}
int main(int argc, char* argv[]) {
    int no = 10;
    string message = "I'm Liam";

    cout << "==========pass by value============" << endl;
    cout << "before:\t\t\t"
         << "no: " << no << ", message: " << message << endl;
    func1(no, message);
    cout << "after:\t\t\t"
         << "no: " << no << ", message: " << message << endl;

    cout << "==========pass by pointer============" << endl;
    cout << "before:\t\t\t"
         << "no: " << no << ", message: " << message << endl;
    func2(&no, &message);
    cout << "after:\t\t\t"
         << "no: " << no << ", message: " << message << endl;

    cout << "==========pass by reference============" << endl;
    cout << "before:\t\t\t"
         << "no: " << no << ", message: " << message << endl;
    func3(no, message);
    cout << "after:\t\t\t"
         << "no: " << no << ", message: " << message << endl;

    return 0;
}
