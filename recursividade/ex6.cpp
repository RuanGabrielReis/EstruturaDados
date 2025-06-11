#include <iostream>
using namespace std;

int numeroPell(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return 2 * numeroPell(n - 1) + numeroPell(n - 2);
}

int main() {
    int n,opcao;

    cout << "\nDigite o valor de N para calcular como numero de Pell: ";
    cin >> n;

    if (n < 0) {
        cout << "Digite um numero inteiro nao negativo." << endl;
    }

    int resultado = numeroPell(n);
    cout << "O numero de Pell e: " << resultado << endl;
    
    cout << "\n\nDigite 0 para encerrar, qualquer outra p/ continuar: ";
	cin >> opcao;
	if (opcao != 0) {
		main();
	} else {
		cout << "\nObrigado por usar o programa!";
	}
}

