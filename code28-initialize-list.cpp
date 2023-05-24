#include <iostream>

using namespace std;

class BoyFriend {
public:
    string m_name;

    BoyFriend() { cout << "using BoyFriend contructor." << endl; }
    BoyFriend(string name) {
        m_name = name;
        cout << "using BoyFriend contructor." << endl;
    }

    BoyFriend(const BoyFriend& other) {
        cout << "using BoyFriend copy contructor." << endl;
    }
};

class Girl {
public:
    string m_name;
    int m_age;
    BoyFriend m_boyFriend;

    Girl() { cout << "using constructor" << endl; }

    // Girl(string name, int age, BoyFriend boyFriend)  // call copy contructor
    //     : m_name("Hi " + name), m_age(age) {
    //     m_boyFriend = boyFriend;  // won't call copy constructor, just
    //                               // assignment opterator (shallow copy)
    //     cout << "using contructor without initialized list" << endl;
    // }
    Girl(string name, int age, BoyFriend boyFriend)  // call copy contructor
        : m_name("Hi " + name),
          m_age(age),
          m_boyFriend(boyFriend) {  // call copy contrucor (no shallow copy)
        cout << "using contructor with initialize list" << endl;
    }

    void show() { cout << "name: " << m_name << ", age: " << m_age << endl; }
};

// Note: only initialize process will call copy constructor.
// If object is inistialized, the = is not copy contructor, rather assignment
// operator.
int main(int argc, char* argv[]) {
    BoyFriend bf("Jack");

    Girl p1("Lili", 55, bf);
    p1.show();

    return 0;
}
