#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int *ptr;
	
	a=90;
	b=2;
	ptr = &a;
	
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	cout << "Endereço de a=" << &a << endl;
	cout << "Endereço de b=" << &b << endl;
	cout << "ptr=" << ptr << endl;
	
}
