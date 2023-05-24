#include <cstring>
#include <iostream>

using namespace std;

class Person {
public:
    string m_name;
    int m_age;
    int* m_ptr;  // will use heap

    Person() {
        m_name.clear();
        m_age = 0;
        m_ptr = nullptr;
        cout << "using contructor" << endl;
    }
    // shallow copy
    // Person(const Person& other) {
    //     m_name = other.m_name;
    //     m_age = other.m_age;
    //     m_ptr = other.m_ptr;  // shallow copy!!!!
    //     cout << "using copy contructor" << endl;
    // }

    // deep copy
    Person(const Person& other) {
        m_name = other.m_name;
        m_age = other.m_age;
        // step 1: allocate new memory
        m_ptr = new int;
        // step 2: copy data
        memcpy(m_ptr, other.m_ptr, sizeof(int));
        cout << "using copy contructor" << endl;
    }

    ~Person() {
        delete m_ptr;
        m_ptr = nullptr;
        cout << "using descructor" << endl;
    }

    void show() { cout << "name: " << m_name << ", age: " << m_age << endl; }
};

int main(int argc, char* argv[]) {
    Person p;
    p.m_name = "Liam";
    p.m_age = 24;
    p.m_ptr = new int(3);
    p.show();

    Person p2 = p;  // using copy contructor
    p2.show();
    return 0;
}
