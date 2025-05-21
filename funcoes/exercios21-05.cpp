#include <iostream>
#include <vector>
#include <string>
#include <sstream> 
#include <cmath>   
using namespace std;

// ex9 
void inverterVetor(vector<int>& vetor) {
    int i = 0, j = vetor.size() - 1;
    while (i < j) {
        int temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
        ++i;
        --j;
    }
}

// ex10
string paraBinario(int numero) {
    if (numero == 0) return "0";
    string resultado = "";
    while (numero > 0) {
        resultado = char('0' + (numero % 2)) + resultado;
        numero /= 2;
    }
    return resultado;
}

// ex11 
bool contemNumero(const vector<int>& vetor, int numero) {
    for (size_t i = 0; i < vetor.size(); ++i) {
        if (vetor[i] == numero) return true;
    }
    return false;
}

// ex12 
bool ehPalindromo(const string& texto) {
    int i = 0;
    int j = texto.length() - 1;
    while (i < j) {
        if (tolower(texto[i]) != tolower(texto[j])) return false;
        ++i;
        --j;
    }
    return true;
}

// ex13 
int contarDigitos(int numero) {
    if (numero == 0) return 1;
    int contador = 0;
    if (numero < 0) numero = -numero;
    while (numero > 0) {
        numero /= 10;
        ++contador;
    }
    return contador;
}

// ex14
bool estaOrdenado(const vector<int>& vetor) {
    for (size_t i = 1; i < vetor.size(); ++i) {
        if (vetor[i] < vetor[i - 1]) return false;
    }
    return true;
}

// ex15 
int posicaoNumero(const vector<int>& vetor, int numero) {
    for (size_t i = 0; i < vetor.size(); ++i) {
        if (vetor[i] == numero) return i; 
    }
    return -1; 
}

// ex16
int somaDigitos(int numero) {
    if (numero < 0) numero = -numero;
    int soma = 0;
    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }
    return soma;
}

// main 
int main() {
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(8);
    v.push_back(1);

    cout << "Binário de 10: " << paraBinario(10) << "\n";

    cout << "Contém 8? " << (contemNumero(v, 8) ? "Sim" : "Não") << "\n";

    cout << "É palíndromo 'ana'? " << (ehPalindromo("ana") ? "Sim" : "Não") << "\n";

    cout << "Dígitos de 12345: " << contarDigitos(12345)*5 << "\n";

    cout << "Está ordenado? " << (estaOrdenado(v) ? "Sim" : "Não") << "\n";

    cout << "Posição do 8: " << posicaoNumero(v, 8) << "\n";

    cout << "Soma dos dígitos de 123: " << somaDigitos(123) << "\n";

    inverterVetor(v);
    cout << "Vetor invertido: ";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}

