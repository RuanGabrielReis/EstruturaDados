#include <iostream>

using namespace std;

int contarOcorrencias(int *v, int tamanho, int valor) {
	int qtt = 0;
	
	for (int i = 0; i<tamanho;i++) {
		if (v[i] == valor)
		qtt++;
	}
	
	return qtt;
}

int main() {
	int i;
	int *v;
	int *ptr;
	
	v = new int[5];
	
	v[0] = 0;
	v[1] = 2;
	v[2] = 8;
	v[3] = 5;
	v[4] = 8;
	
	cout << contarOcorrencias(v, 5, 8);
	
	delete[] v;
}
