#include <iostream>
#include <vector>
#include <string>
#include <cctype> // Para tolower()
using namespace std;

// ex1
int somar(int a, int b) {
    return a + b;
}

// ex2
bool ehPar(int numero) {
    return numero % 2 == 0;
}

// ex3
int maiorElemento(const vector<int>& vetor) {
    if (vetor.empty()) return -1;
    int maior = vetor[0];
    for (size_t i = 0; i < vetor.size(); ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

// ex4
unsigned long long fatorial(int n) {
    if (n < 0) return 0;
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

// ex5
bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// ex6
double mediaAritmetica(const vector<int>& vetor) {
    if (vetor.empty()) return 0.0;
    int soma = 0;
    for (size_t i = 0; i < vetor.size(); ++i) {
        soma += vetor[i];
    }
    return static_cast<double>(soma) / vetor.size();
}

// ex7
int contarVogais(const string& texto) {
    int contador = 0;
    for (size_t i = 0; i < texto.length(); ++i) {
        char c = tolower(texto[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            ++contador;
        }
    }
    return contador;
}

// ex8
int maiorEntreDois(int a, int b) {
    return (a > b) ? a : b;
}

// main
int main() {
    cout << "Soma: " << somar(3, 5) << "\n";
    cout << "É par? " << (ehPar(4) ? "Sim" : "Não") << "\n";

    vector<int> v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(3);
    v.push_back(9);
    v.push_back(2);

    cout << "Maior elemento: " << maiorElemento(v) << "\n";
    cout << "Fatorial de 5: " << fatorial(5) << "\n";
    cout << "É primo? " << (ehPrimo(7) ? "Sim" : "Não") << "\n";
    cout << "Média: " << mediaAritmetica(v) << "\n";
    cout << "Vogais: " << contarVogais("ChatGPT é incrível!") << "\n";
    cout << "Maior entre 10 e 20: " << maiorEntreDois(10, 20) << "\n";

    return 0;
}

