#include <iostream>

using namespace std;

class Girl {
public:
    string m_name;
    int m_age;

    Girl() { cout << "using constructor" << endl; }

    Girl(string name, int age)  // call copy contructor
        : m_name("Hi " + name), m_age(age) {
        cout << "using contructor with initialize list" << endl;
    }
    // comfirm this function won't change member variable
    void show() const {
        cout << "name: " << m_name << ", age: " << m_age << endl;
    }
};

// Note: only initialize process will call copy constructor.
// If object is inistialized, the = is not copy contructor, rather assignment
// operator.
int main(int argc, char* argv[]) {
    Girl p1("Lili", 55);
    p1.show();

    return 0;
}
