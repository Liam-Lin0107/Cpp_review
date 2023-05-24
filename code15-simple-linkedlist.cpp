#include <cstring>
#include <iostream>
using namespace std;

struct LinkedList {
    int no;
    string name;
    LinkedList* next;
};

int main(int argc, char* argv[]) {
    LinkedList* head = nullptr;
    LinkedList* tail = nullptr;
    LinkedList* curr = nullptr;

    curr = new LinkedList({1, "Lucia", nullptr});
    head = curr;
    tail = curr;

    curr = new LinkedList({2, "Lia", nullptr});
    tail->next = curr;
    tail = curr;

    curr = new LinkedList({3, "Mia", nullptr});
    tail->next = curr;
    tail = curr;

    // go through linked list
    curr = head;
    while (curr != nullptr) {
        cout << "no: " << curr->no << ", name: " << curr->name << endl;
        curr = curr->next;
    }

    // free dynamic memory
    while (head != nullptr) {
        curr = head;
        head = head->next;
        delete curr;
    }

    return 0;
}
