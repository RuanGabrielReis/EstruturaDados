#include <iostream>
using namespace std;

void trocaDeValores(int *a, int *b) {
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int *a;
	int *b;
	a = new int;
	b = new int;
	
	cout<< "Digite o valor de a: " << endl;
	cin >> *a;
	cout<< "Digite o valor de b " << endl;
	cin >> *b;
	
	trocaDeValores(a,b);
	
	cout << "Conteudo de a=" << *a << endl;
	cout << "Conteudo de b=" << *b << endl;
	
	delete a;
	delete b;
}

