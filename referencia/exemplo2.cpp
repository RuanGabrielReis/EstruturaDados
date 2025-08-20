#include <iostream>

using namespace std;

void getNotas(float &n1, float &n2, float &n3) {
	cout << "Digite a nota 1: ";
	cin >> n1;
	
	cout << "Digite a nota 2: ";
	cin >> n2;
	
	cout << "Digite a nota 3: ";
	cin >> n3;
}

float calcularMedia(float n1, float n2, float n3) {
	return (n1+n2+n3)/3;
}

int main() {
	float n1,n2,n3;
	getNotas(n1,n2,n3);
	
	cout << "A media eh " << calcularMedia(n1,n2,n3) << endl;
}
