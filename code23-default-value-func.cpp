#include <iostream>

using namespace std;

void fun(const string& message = "I Love u.");

int main(int argc, char* argv[]) {
    fun();
    fun("Hi!!!");

    return 0;
}

// Note: defaul value should not appeare in definition.
void fun(const string& message) { cout << ": " << message << endl; }
