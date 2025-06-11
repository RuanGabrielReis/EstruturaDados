#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int superfatorial(int n) {
    if (n == 1)
        return fatorial(1);
    else
        return fatorial(n) * superfatorial(n - 1);
}

int main() {
    int numero,opcao;

    cout << "\nDigite um numero inteiro positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "O numero deve ser inteiro e positivo!" << endl;
    }

    int resultado = superfatorial(numero);

    cout << "O superfatorial eh: " << resultado << endl;
    
    cout << "\nDigite 0 para encerrar, qualquer outra p/ continuar: ";
	cin >> opcao;	
	if (opcao != 0) {
		main();
	} else {
		cout << "\nObrigado por usar o programa!";
	}
}

