#include <cstring>
#include <iostream>
using namespace std;

struct Pet {
    char name[21];
    int age;
};
struct Person {
    // string name; // not recommand using C++ string class in struct
    char name[21];
    int age;
    double weight;
    char sex;
    bool single;
    struct Pet pet;
};

void printPerson(const Person* pp) {
    cout << "Name: " << pp->name << endl;
    cout << "age: " << pp->age << endl;
    cout << "weight: " << pp->weight << endl;
    cout << "sex: " << pp->sex << endl;
    cout << "single: " << pp->single << endl;
    cout << "pet name: " << pp->pet.name << endl;
    cout << "pet age: " << pp->pet.age << endl;
}

struct Arr2d {
    int arr[10][10];
};

void setHDArr(Arr2d* arr2d) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            arr2d->arr[i][j] = 10 + i * j;
        }
    }
}

void printHDArr(const Arr2d* arr2d) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arr2d->arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    struct Person pArr[3] = {0};
    for (int i = 0; i < 3; i++) {
        printPerson(&pArr[i]);
        cout << endl;
    }
    strcpy((pArr[0].name), "Hi");
    printPerson(&pArr[0]);

    cout << "=======using struct to deal with high d array============" << endl;
    struct Arr2d arr2d;
    setHDArr(&arr2d);
    printHDArr(&arr2d);

    cout << "======assign struct(C++11)=============" << endl;
    struct Person p = {"Hi", 23, 80.2, 'F', false, {"Lili", 2}};
    printPerson(&p);
    p = {"Liam", 24, 80.2, 'M', true, {"Luke", 1}};  // C++11
    printPerson(&p);
    return 0;
}
