#include <iostream>
using namespace std;

int main() {
    char str[] = "teste";
    char *ptr = str;

    cout << "A string completa: " << ptr << endl;

    cout << "Caracteres da string usando o ponteiro:" << endl;
    while(*ptr != '\0') {
        cout << *ptr << endl;
        ptr++;
    }

}
