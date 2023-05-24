#include <cstring>
#include <iostream>

using namespace std;

struct Person {
    // string name; // not recommand using C++ string class in struct
    char name[21];
    int age;
    double weight;
    char sex;
    bool single;
};

void printPerson(const Person* pp) {
    cout << "Name: " << pp->name << endl;
    cout << "age: " << pp->age << endl;
    cout << "weight: " << pp->weight << endl;
    cout << "sex: " << pp->sex << endl;
    cout << "single: " << pp->single << endl;
}

int main(int argc, char* argv[]) {
    // method 1
    // Person p = {"Liam", 25, 80};
    // method 2: set all member to 0
    // Person p = {0};
    // method 3
    Person p = {"Liam", 25, 80.2, 'M', false};
    printPerson(&p);

    // the sizeof struct not equal to sum of the datatype size in struct.
    // because struct need "Memory Alignment"
    cout << "sizeof(Person)=" << sizeof(Person) << endl;

    cout << "====set zero======" << endl;
    memset(&p, 0, sizeof(Person));
    printPerson(&p);

    cout << "=======copy=======" << endl;
    // method1
    Person p1 = {"Liam", 25, 80.2, 'M', false};
    Person p2;
    memcpy(&p2, &p1, sizeof(Person));
    printPerson(&p2);
    // method2
    Person p3 = p1;
    cout << "My name is " << p3.name << ", age = " << p3.age << endl;
    cout << "&p3=" << (long long)(&p3) << endl;
    cout << "&p2=" << (long long)(&p2) << endl;
    cout << "&p1=" << (long long)(&p1) << endl;
    // Note: Struct name isn't like array name which translate to array pointer.
    // Struct name just a container not a pointer.
    printPerson(&p3);

    cout << "======strut in heap==========" << endl;
    Person* p4 = new Person;  // can't use initial list
    memset(p4, 0, sizeof(Person));
    printPerson(p4);
    return 0;
}
