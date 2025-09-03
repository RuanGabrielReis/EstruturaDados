#include <iostream>

using namespace std;

int encontrarMaior(int *v, int tamanho) {
	int i = 0;
	int maior;
	
	for (i = 0; i < 5; i++) {
		if ((v[i] > maior) || (i == 0)) {
			maior = v[i];
		}
	}
	
	return maior;
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
	
	cout << encontrarMaior(v, 5);
	
	delete[] v;
}
