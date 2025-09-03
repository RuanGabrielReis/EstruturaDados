#include <iostream>
using namespace std;

void preencherMatriz(int *matriz, int linhas, int colunas) {
    cout << "Digite os valores para a matriz 3x3:" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> *(matriz + i * colunas + j);
        }
    }
}

void imprimirMatriz(int *matriz, int linhas, int colunas) {
    cout << "\nMatriz 3x3:" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << *(matriz + i * colunas + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    const int linhas = 3, colunas = 3;
    int matriz[linhas][colunas];

    preencherMatriz(&matriz[0][0], linhas, colunas);
    imprimirMatriz(&matriz[0][0], linhas, colunas);

    return 0;
}
