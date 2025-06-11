#include <iostream>
using namespace std;

fatorial(int num) {
	if (num == 1) {
		return 1;
	} else {
		return num * fatorial(num-1);
	}
}

main() {
	int n,opcao;
	cout << "\nDigite o número para fatoriacao: ";
	cin >> n;
	
	cout << fatorial(n);
	
	cout << "\n\nDigite 0 para encerrar, qualquer outra p/ continuar: ";
	cin >> opcao;
	if (opcao != 0) {
		main();
	} else {
		cout << "Obrigado por usar o programa!";
	}
}
