#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
    deque<char> linha;           // Linha de texto atual
    deque<char> redoStack;       // Pilha para armazenar caracteres desfeitos (para REDO)

    string comando;
    cout << "Simulador de Editor de Texto\n";
    cout << "Comandos: INSERT <char>, UNDO, REDO, PRINT, EXIT\n";

    while (true) {
        cout << "> ";
        getline(cin, comando);

        // Comando EXIT
        if (comando == "EXIT") {
            break;
        }
        // Comando PRINT
        else if (comando == "PRINT") {
            if (linha.empty()) {
                cout << "(linha vazia)" << endl;
            } else {
                for (char c : linha) {
                    cout << c;
                }
                cout << endl;
            }
        }
        // Comando UNDO
        else if (comando == "UNDO") {
            if (!linha.empty()) {
                redoStack.push_back(linha.back());
                linha.pop_back();
            } else {
                cout << "Nada para desfazer." << endl;
            }
        }
        // Comando REDO
        else if (comando == "REDO") {
            if (!redoStack.empty()) {
                linha.push_back(redoStack.back());
                redoStack.pop_back();
            } else {
                cout << "Nada para refazer." << endl;
            }
        }
        // Comando INSERT
        else if (comando.rfind("INSERT ", 0) == 0 && comando.size() > 7) {
            char c = comando[7];
            linha.push_back(c);
            redoStack.clear(); // Qualquer insert limpa o "redo" possível
        }
        else {
            cout << "Comando inválido." << endl;
        }
    }

    cout << "Editor encerrado." << endl;
    return 0;
}
