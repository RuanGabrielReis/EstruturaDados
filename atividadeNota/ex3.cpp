#include <iostream>

using namespace std;

void dobrarValor(int& x) {
	x = x*2; //  pega o valor e multiplica por 2, dobrando. ele dobra esse e a variavel do main tambem, por estar referenciando
}

int main() {
    int x;
    
    cout << "Qual o valor?" << endl;;
    cin >> x; // le o valor digitado e armazena em x
	
	cout << endl << "Valor antes da chamada: " << x << endl; // só escreve, antes de chamar
    dobrarValor(x);

    cout << "Valor depois da chamada: " << x << endl; // escreve após a multiplicação

}
