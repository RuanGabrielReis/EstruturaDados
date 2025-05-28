#include <iostream>
using namespace std;

float matriz1[2][2] = {{2,3},{3,4}};
float matriz2[2][2] = {{3,2},{4,3}};
float matriz3[2][2];
float temp = 0;

int main() {
	for (int i=0;i<2;i++) {
		for (int j=0;j<2;j++) {
			for (int k=0;k<2;k++) {
				temp = temp + (matriz1[i][k] * matriz2[k][j]);
			}
			matriz3[i][j] = temp;
			temp = 0;
		}
	}
	
	for (int i=0;i<2;i++) {
		for (int j=0;j<2;j++) {
			cout << matriz3[i][j] << " ";
		}
		cout << endl;
	}
	
}
