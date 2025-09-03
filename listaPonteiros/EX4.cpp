#include <iostream>

using namespace std;

int main() {
	int i;
	int *v;
	int *ptr;
	
	v = new int[5];
	
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	v[3] = 4;
	v[4] = 5;
	
	for(i=0;i<5;i++) {
		ptr = &v[i];
		cout << "v[" << i << "]: " << v[i] << " no endereco " << ptr << endl;
	}
	
	
	delete[] v;
}
