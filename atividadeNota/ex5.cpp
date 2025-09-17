#include <iostream>
using namespace std;

float calcularMedia(int* pont, int tam) { // recebe como parametro o ponteiro e o tamanho
	float total = 0;
	for (int i = 0; i < tam; i++) {
		total = total + pont[i]; // adiciona todos os valores em um for q passa o numero de vezes do tamanho
	};
	
	return total/tam; // retorna direto a media
}

int main() {
	int tam;
	
	cout << "Digite o tamanho do vetor: " << endl;
	cin >> tam; // le o numero de notas
	
	int *v; // cria o ponteiro
	v = new int[tam]; // aloca o vetor no lugar especificado
	
	for (int i = 0; i < tam; i++) {
		cout << "Digite o " << i+1 << " valor: "<< endl; // le o numero de valores q o cliente pediu e armazena no vetor
		cin >> v[i];
	}
	
	cout << "A media eh " << calcularMedia(v,tam) << endl; // ja escreve e chama a funcao junto
	
	delete[] v; // libera a memoria
}
