#include <iostream>

using namespace std;

enum Sex { Male, Female };

class Person {
private:
    // enum Sex { Male, Female };
    string m_name;
    int m_age;
    Sex m_sex;

public:
    Person() { initialize(); }

    Person(string name) {
        initialize();
        m_name = name;
    }

    Person(string name, int age, Sex sex) {
        initialize();
        m_name = name;
        m_age = age;
        m_sex = sex;
    }

    ~Person() { cout << "Person is destructed" << endl; }

private:
    void initialize() {
        m_name = "";
        m_age = 0;
        m_sex = Sex::Male;
    }

public:
    void introduce() {
        switch (m_sex) {
            case Sex::Male:
                cout << "Name: " << m_name << ", age: " << m_age << ", sex: "
                     << "male" << endl;
                break;
            case Sex::Female:
                cout << "Name: " << m_name << ", age: " << m_age << ", sex: "
                     << "female" << endl;
                break;
        }
    }
};

int main(int argc, char* argv[]) {
    Person p1;  // Don't add () when you using default constructor because
                // compiler will translate to function definition.
    Person p2("Liam", 25, Sex::Male);
    // equal to: Person p2 = Person("Liam", 25, Sex::Male)

    p1.introduce();
    p2.introduce();

    Person p3;      // create one
    p3 = Person();  // create one and copy to p3

    Person* p4 = new Person("Kuo", 38, Sex::Female);
    p4->introduce();

    delete p4;
    p4 = nullptr;
    return 0;
}
