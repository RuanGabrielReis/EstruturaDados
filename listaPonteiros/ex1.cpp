#include <iostream>
using namespace std;

int main() {
	int a;
	int *ptr = &a;
	
	cout<< "Digite o valor de a: " << endl;
	cin >> a;
	
	
	cout << "Conteudo de a: " << a << endl;
	cout << "Posicao de a: " << ptr << endl;
}

