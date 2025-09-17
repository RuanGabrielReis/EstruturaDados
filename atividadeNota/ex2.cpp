#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
class Set {
private:
    struct Node {
        T value;
        Node* next;

        Node(const T& val) : value(val), next(nullptr) {}
    };

    Node* head;

public:
    Set() : head(nullptr) {}

    ~Set() {
        clear();
    }

    bool isEmpty() const {
        return head == nullptr;
    }

    bool contains(const T& value) const {
        Node* current = head;
        while (current != nullptr) {
            if (current->value == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void insert(const T& value) {
        if (contains(value)) {
            std::cout << "Elemento já existe no conjunto." << std::endl;
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void remove(const T& value) {
        if (isEmpty()) {
            std::cout << "Conjunto vazio." << std::endl;
            return;
        }

        if (head->value == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            std::cout << "Elemento removido do conjunto." << std::endl;
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->value != value) {
            current = current->next;
        }

        if (current->next == nullptr) {
            std::cout << "Elemento não encontrado no conjunto." << std::endl;
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
        std::cout << "Elemento removido do conjunto." << std::endl;
    }

    void clear() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    void print() const {
        if (isEmpty()) {
            std::cout << "Conjunto vazio." << std::endl;
            return;
        }
    
        std::vector<T> values;
        Node* current = head;
        while (current != nullptr) {
            values.push_back(current->value);
            current = current->next;
        }
    
        std::sort(values.begin(), values.end()); // linha adiciona no print para ordenar, utilozando o metodo de biblioteca sort()
    
        for (const auto& val : values) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
};

using namespace std;

int main() {
	char cond = 'n';
	Set<string> set;
	string nome;
	int cont = 0;
	
	while (cond == 'n') { // enquanto a condicao for n, a gente le nome
		cout << "Digite um nome, escreva fim para terminar;" << endl;
		
		cin >> nome;
		
		if (nome == "fim") {
			cond = 's';
			cout << "Número de nomes: " << cont << endl; // printa o contador
		    set.print(); // print ja esta modificado para estar ordenado
		} else { // insere nomes e adiciona 1 no contador;
			set.insert(nome);
			cont ++;
		}
	}
}
