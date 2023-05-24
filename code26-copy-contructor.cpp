#include <iostream>

using namespace std;

class Person {
public:
    string m_name;
    int m_age;

    Person() {
        m_name.clear();
        m_age = 0;
        cout << "Person is contructed" << endl;
    }

    // copy contructor (if not provide compile will create one for you)
    // Note: compiler create contructor do noting, but copy constructor will do
    // copy all member.
    Person(const Person& other) {
        m_name = other.m_name;
        m_age = other.m_age;

        cout << "Using copy contructor!!" << endl;
    }

    ~Person() { cout << "Person is desctructed!" << endl; }

    void show() { cout << "Name: " << m_name << ", age: " << m_age << endl; }
};

Person func() {
    Person p;
    cout << "address in func: " << &p << endl;
    return p;  // should be copied, but not. because compiler optimize it so
               // local p won't be delete and still alive, then passing to
               // caller.
}

int main(int argc, char* argv[]) {
    // Person p;
    // Person p2 = Person();
    // Person* p3 = new Person;
    // Person* p4 = new Person();

    Person p;
    p.m_name = "Liam";
    p.m_age = 23;
    Person p2(p);  // copy
    p2.show();

    Person p3 = p;
    p3.show();

    Person p4 = func();  // won't call copy, because func() won't have a
                         // variable to contain.
    cout << "address in main: " << &p4 << endl;
    return 0;
}
