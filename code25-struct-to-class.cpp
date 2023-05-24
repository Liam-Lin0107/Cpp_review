#include <iostream>

using namespace std;

enum Sex { Male, Female };

class Person {
  private:
    // enum Sex { Male, Female };
    string name;
    int age;
    Sex sex;

  public:
    void makePerson(string name, int age, Sex sex) {
        this->name = name;
        this->age = age;
        this->sex = sex;
    }

    void introduce() {
        switch (sex) {
            case Sex::Male:
                cout << "Name: " << name << ", age: " << age << ", sex: "
                     << "male" << endl;
                break;
            case Sex::Female:
                cout << "Name: " << name << ", age: " << age << ", sex: "
                     << "female" << endl;
                break;
        }
    }
};

int main(int argc, char *argv[]) {
    Person p;
    p.makePerson("Liam", 25, Sex::Male);
    p.introduce();

    return 0;
}
