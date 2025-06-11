#include <iostream>
using namespace std;
int i = 0;

int somaVetor(int lista[],int tam) {
	if (tam==0) {
		return 0;
	} else {
		return lista[tam-1] + somaVetor(lista,tam-1);
	}
}

main() {
	int n=10;
	int lista[n] = {1,2,3,4,5,6,7,8,9,10};
	cout << somaVetor(lista,n); 
}
