#include <iostream>
using namespace std;

fibonacci(int pos) {
	if (pos == 1 || pos == 2) {
		return 1;
	} else if (pos <=0){
		cout << "Erro, tente novamente";
		exit(0);
	} else {
		return fibonacci(pos-1) + fibonacci (pos-2);
	}
}

main() {
	int n,opcao;
	cout << "\nDigite a posicao no fibonacci: ";
	cin >> n;
	
	cout << fibonacci(n); 
	
	cout << "\n\nDigite 0 para encerrar, qualquer outra p/ continuar: ";
	cin >> opcao;	
	if (opcao != 0) {
		main();
	} else {
		cout << "\nObrigado por usar o programa!";
	}
}
