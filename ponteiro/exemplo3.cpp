#include <iostream>
using namespace std;

int main() {
	int a;
	int *ptr;
	
	a=90;
	ptr = &a;
	
	cout << "a=" << a << endl;
	cout << "Endere�o de a=" << &a << endl;
	cout << "ptr=" << ptr << endl;
	cout << "*ptr=" << *ptr << endl;
	
	*ptr = 120;
	
	cout << "a=" << a << endl;
	cout << "ptr=" << ptr << endl;
	cout << "*ptr=" << *ptr << endl;
}
