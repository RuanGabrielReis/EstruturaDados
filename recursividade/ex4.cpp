#include <iostream>
using namespace std;

int maiorValor(int lista[], int tam) {
	if (tam == 1) {
		return lista[0];
	} else {
		int maiorDoResto = maiorValor(lista, tam - 1);
		if (lista[tam - 1] > maiorDoResto)
			return lista[tam - 1];
		else
			return maiorDoResto;
	}
}

int main() {
	int n = 10;
	int lista[n] = {3, 7, 2, 9, 1, 8, 4, 6, 10, 5};

	cout << "Maior valor: " << maiorValor(lista, n) << endl;

	return 0;
}

