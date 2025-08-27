#include <iostream>

using namespace std;

int main() {
	int i, tam;
	int total = 0;
	int *v;
	
	cout << "Qual o tamanho do vetor: " << endl;
	cin >> tam;
	
	v = new int[tam];
	
	for(i=0;i<tam;i++) {
		cout << "valor " << i+1 << ": " << endl;
		cin >> v[i];
		total = total + v[i];
	}
	
	for(i=0;i<tam;i++) {
		cout << "v[" << i+1 << "]: " << v[i] << " no endereco " << &v[i] << endl;
	}
	
	cout << "A media eh " << total/tam;
	
	delete[] v;
}
