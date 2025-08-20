#include <iostream>
#include <vector>
using namespace std;

void carregarVetor(vector<int>& vetor, int quantidade) {
    cout << "Digite " << quantidade << " numeros inteiros:" << endl;
    for (int i = 0; i < quantidade; ++i) {
        int numero;
        cin >> numero;
        vetor.push_back(numero);
    }
}

void calcularValores(const vector<int>& vetor, double& media, int& soma, int& maior, int& menor) {
    if (vetor.empty()) {
        soma = 0;
        media = 0;
        maior = menor = 0;
        return;
    }

    soma = 0;
    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < vetor.size(); ++i) {
        soma += vetor[i];
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    }
    media = static_cast<double>(soma) / vetor.size();
}

int main() {
    int n;
    cout << "Quantos numeros deseja carregar? ";
    cin >> n;

    vector<int> numeros;
    carregarVetor(numeros, n);

    double media;
    int soma, maior, menor;
    calcularValores(numeros, media, soma, maior, menor);

    cout << "Vetor carregado: ";
    for (int i = 0; i < numeros.size(); ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

}
