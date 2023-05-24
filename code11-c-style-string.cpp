#include <cstring>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    string str = "xyz";
    cout << "str[0]=" << str[0] << endl;
    cout << "str[1]=" << str[1] << endl;
    cout << "str[2]=" << str[2] << endl;
    cout << "str[3]=" << str[3] << endl;

    cout << "=====Ascii======" << endl;
    cout << "str[0]=" << (int)str[0] << endl;
    cout << "str[1]=" << (int)str[1] << endl;
    cout << "str[2]=" << (int)str[2] << endl;
    cout << "str[3]=" << (int)str[3] << endl;

    cout << "=====Uninitailized======" << endl;
    char name[22];  // very dangerous which has no end tag \0
    cout << "name=" << name << endl;
    cout << "name[0]=" << (int)name[0] << endl;
    cout << "name[1]=" << (int)name[1] << endl;
    cout << "name[2]=" << (int)name[2] << endl;
    cout << "name[3]=" << (int)name[3] << endl;

    cout << "======standar way======" << endl;
    char name2[11] = {0};
    cout << "name2[1]=" << (int)name2[1] << endl;
    cout << "name2[2]=" << (int)name2[2] << endl;
    cout << "name2[3]=" << (int)name2[3] << endl;

    cout << "======clear char array======" << endl;
    memset(name2, 0, sizeof(name2) / sizeof(char));
    cout << "name2[1]=" << (int)name2[1] << endl;
    cout << "name2[2]=" << (int)name2[2] << endl;
    cout << "name2[3]=" << (int)name2[3] << endl;

    cout << "======copy string========" << endl;
    strcpy(name2, "Hello");  // unsafe which has risk of outofbound error, auto
                             // end with \0
    cout << name2 << endl;
    cout << "name2[0]=" << name2[0] << endl;
    cout << "name2[1]=" << name2[1] << endl;
    cout << "name2[2]=" << name2[2] << endl;
    cout << "name2[3]=" << name2[3] << endl;

    cout << "=====len string=====" << endl;
    cout << "name2 len=" << strlen(name2) << endl;

    cout << "=====concat string=====" << endl;
    cout << "after concat: " << strcat(name2, ", world") << endl;
    cout << "name2 len=" << strlen(name2) << endl;

    return 0;
}
