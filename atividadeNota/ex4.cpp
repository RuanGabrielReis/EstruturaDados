#include <iostream>

using namespace std;

 void calcularAreaPerimetro(float lado, float &area, float &perimetro)  { // area e perimetro estao por referencia, portanto, ao alterá-los aqui, alteramos la tmabem
	area = lado*lado; // ccalculamos area 
	perimetro= lado*4; // calculamos perimetro
}

int main() {
	//declara os 3, mesmo q os dois ultimos só serao preenchidos na funçao
    float lado;
    float area;
    float perimetro;
    
    cout << "Qual o lado do quadrado?" << endl;;
    cin >> lado; // le o valor digitado e armazena em lado
	
	calcularAreaPerimetro(lado,area,perimetro); // cchama a funcao

    cout << "Lado: " << lado << endl << "Area: " << area << endl << "Perimetro: " << perimetro << endl; // printa tudo

}
