#include <iostream>
#include <vector>
using namespace std;
char cond = 's';


void ordenarNumeros(int& n1, int& n2, int& n3) {
	while (cond != 'n') {
		if (n1>n2) {
			int temp = n1;
			n1 = n2;
			n2 = temp;
		} else if (n2>n3) {
			int temp = n2;
			n2 = n3;
			n3 = temp;
		} else {
			cond = 'n';
		}
	}
}

int main() {
    int n1,n2,n3;
    cout << "Qual o primeiro valor? ";
    cin >> n1;
    cout << "Qual o segundo valor? ";
    cin >> n2;
    cout << "Qual o terceiro valor? ";
    cin >> n3;

    ordenarNumeros(n1,n2,n3);

    cout << "Numero ordenados: " << n1 << " " << n2 << " " << n3;

}
