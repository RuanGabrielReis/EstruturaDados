#include <iostream>

template <typename T>
class Deque {
private:
    struct Node {
    T value;
    Node* prev;
    Node* next;
        Node(const T& val) : value(val), prev(nullptr), next(nullptr) {}
    };

    Node* front;
    Node* back;

public:
    Deque() : front(nullptr), back(nullptr) {}

    ~Deque() {
        clear();
    }

    bool isEmpty() const {
        return front == nullptr;
    }

    void pushFront(const T& value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = back = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    void pushBack(const T& value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = back = newNode;
        } else {
            newNode->prev = back;
            back->next = newNode;
            back = newNode;
        }
    }

    void popFront() {
        if (isEmpty()) {
            std::cout << "O deque está vazio." << std::endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == nullptr) {
            back = nullptr;
        } else {
            front->prev = nullptr;
        }

        delete temp;
    }

    void popBack() {
        if (isEmpty()) {
            std::cout << "O deque está vazio." << std::endl;
            return;
        }

        Node* temp = back;
        back = back->prev;

        if (back == nullptr) {
            front = nullptr;
        } else {
            back->next = nullptr;
        }

        delete temp;
    }

    const T& getFront() const {
        if (isEmpty()) {
            throw std::runtime_error("O deque está vazio.");
        }
        return front->value;
    }

    const T& getBack() const {
        if (isEmpty()) {
            throw std::runtime_error("O deque está vazio.");
        }
        return back->value;
    }

    void clear() {
        Node* current = front;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        front = back = nullptr;
    }

    void print() const {
        if (isEmpty()) {
            std::cout << "O deque está vazio." << std::endl;
            return;
        }

        Node* current = front;
        while (current != nullptr) {
            std::cout << current->value << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

using namespace std;

int main() {
	Deque<string> deque;
	char tipo;
	string nome;
	char cond = 'n';
	int cont = 0;
	
	
	while (cond == 'n') { // enquanto a condição permanecer em 'n', a insercao se repetira	
	    
		cout << "Voce ira preencher um cliente normal ou prioritário? N para normal ou P para prioritário. Digite 0 para acabar com a fila e ver ela." << endl;
		
		cin >> tipo; // le o tipo de cliente
	
			
		if ((tipo == 'n') or (tipo == 'N')) { // caso for normal, adiciona no final do deque, e adicina 1 no contador de usuarios'	
    		cont++;    
    		cout << "Digite o nome do cliente:" << endl;
    		
    		cin >> nome;
			deque.pushBack(nome);
		} else if ((tipo == 'p') or (tipo == 'P')) { // caso for prioritario, adiciona no comeco do deque, e adicina 1 no contador de usuarios'	

    		cont++;    
    		cout << "Digite o nome do cliente:" << endl;
    		
    		cin >> nome;
			deque.pushFront(nome);
		} else if (tipo == '0'){ // caso digite 0, ira fechar parar o while, mudando o cond, e ira printar a fila.
			cond = 's';
    		for (int i = 0; i < cont; i++){
    		    cout << deque.getBack() << endl;;
    		    deque.popBack();
	       }
		} else { // se for qualquer outra coisa, volta sem preencher nada.
			cout << "Tipo de cliente inserido incorreto, tente novamente." <<endl;
			
		}
	}	
}
