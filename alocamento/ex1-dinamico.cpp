#include <iostream>
using namespace std;

int main() {
	cout << "Quantas numeros voce ira digitar?";
	int tamanho;
	cin >> tamanho;
	
	int* arrayDin = new int[tamanho];
	
	for (int i = 0; i < tamanho; i++) {
		cout << "Digite o " << i+1 << " numero: ";
		cin >> arrayDin[i];
	}
	
	for (int i = 0; i < tamanho; i++) {
		cout << arrayDin[i] << " ";	
	}	
}
