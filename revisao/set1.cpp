#include <iostream>
#include <string>

// Sua implementação de Set aqui (copie a implementação que você mandou!)

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
            return;
        }
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
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
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->value << std::endl;
            current = current->next;
        }
    }

    // Conta quantos elementos existem no conjunto
    size_t size() const {
        size_t count = 0;
        Node* current = head;
        while (current != nullptr) {
            ++count;
            current = current->next;
        }
        return count;
    }
};

using namespace std;

int main() {
    Set<string> palavrasUnicas;
    string palavra;

    cout << "Digite palavras (uma por linha). Digite 'fim' para encerrar.\n";

    while (true) {
        cout << "> ";
        cin >> palavra;
        if (palavra == "fim")
            break;
        palavrasUnicas.insert(palavra);
    }

    cout << "\nQuantidade de palavras únicas: " << palavrasUnicas.size() << endl;
    cout << "Palavras únicas (ordem de inserção reversa):\n";
    palavrasUnicas.print();

    return 0;
}
