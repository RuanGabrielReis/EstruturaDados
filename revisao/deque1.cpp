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

	Deque<char> deque;
	int tam = 3;
	int i;
	
	deque.pushFront('a');
	deque.pushFront('r');
	deque.pushFront('a');
	deque.pushFront('r');
	deque.pushFront('a');
	
	for (i = 0; i < tam; i++) {
		if (deque.getFront() == deque.getBack()) {
		    
			if (i == tam - 1) {
			    cout << "A palavra é palindromo";
			    break;
			}
			deque.popBack();
		    deque.popFront();
		} else {
		    cout << "Não é palindromo";
		    deque.clear();
			break;
		}
	}
}
