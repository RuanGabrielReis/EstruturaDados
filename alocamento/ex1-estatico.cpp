#include <iostream>
using namespace std;
#define tamanho 3

int ArrayEstatica[tamanho] = {1,2,5} ;
int soma = 0;

int main() {
	for (int i=0;i<3;i++) {
		soma = soma + ArrayEstatica[i];		
	}
	
	cout << soma;
}
