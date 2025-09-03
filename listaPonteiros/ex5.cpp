#include <iostream>
using namespace std;

void alocaPonteiro(int **p) {
    *p = new int;     
    **p = 8;         
}

int main() {
    int *ptr;
    alocaPonteiro(&ptr);

    cout << "Valor alocado: " << *ptr << endl;

    delete ptr; 
}

