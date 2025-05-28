#include <iostream>
using namespace std;

int main() {
	cout << "Quantas linhas tera?";
	int linha;
	cin >> linha;
	
	cout << "Quantas colunas tera?";
	int coluna;
	cin >> coluna;
	
	int* matrizDin = new int[linha][coluna];
	
	for (int i = 0; i < linha; i++) {
		for (int j = 0; j < coluna; j++) {
			cout << "Digite o " << j+1 << " numero da linha "<< i+1 <<": ";
			cin >> matrizDin[i][j];
		}
	}
	
	for (int i = 0; i < linha; i++) {
		for (int j = 0; j < coluna; j++) {
			cout << matrizDin[i][j] << " ";
		}
		cout << endl;
	}	
}
