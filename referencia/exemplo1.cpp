#include <iostream>

using namespace std;

int main() {
	int a;
	int &b = a;
	a=100;
	b=10;
	
	cout << a << endl;
	cout << b << endl;
}
