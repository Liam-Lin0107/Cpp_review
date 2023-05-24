#include <iostream>
using namespace std;

void costom(int no, string str) {
    cout << "Dear " << no << ", " << str << endl;
}

void prepare(void (*pfunc)(int, string), int no, string str) {
    cout << "before.." << endl;
    pfunc(no, str);
    cout << "after.." << endl;
}

int main(int argc, char *argv[]) {
    int no = 3;
    string message = "I am a little bird.";

    costom(no, message);

    // define function pointer
    void (*pfunc)(int, string);
    pfunc = costom;

    pfunc(no, message);

    prepare(pfunc, no, message);

    return 0;
}
