#include <iostream>

using namespace std;

int main() {
	int i;
	int *v;
	
	v = new int[10];
	
	for(i=0;i<10;i++) {
		cout << "valor " << i+1 << ": " << endl;
		cin >> v[i];
	}
	
	for(i=0;i<10;i++) {
		cout << "v[" << i+1 << "]: " << v[i] << " no endereco " << &v[i] << endl;
	}
	
	delete[] v;
}
