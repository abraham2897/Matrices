/*Ej.3 Hacer una matriz de tipo entera de 2*2, llenarla de
números y luego copiar todo su contenido hacia otra matriz. */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[2][2]={{4,6},{3,5}};
	int numeros2[2][2];
	//pasando el contenido de números hacia la otra matriz
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			numeros2[i][j]=numeros[i][j];
		}
}
	//mostrando la segunda matriz
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<numeros2[i][j];
		}
		cout<<"\n";
	}
	
	system("pause");
	return 0;
}