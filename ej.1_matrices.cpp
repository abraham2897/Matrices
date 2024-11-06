/* APUNTE Holis

Arrays bidimensionales o matrices
Una matriz es un vector de vectores.

Declarando una matriz en C++

tipo nombre[nfilas][ncolumnas]; // se pondrán 2 corchetes, uno que guiará a las filas y el otro a las columnas


también como en los vectores empezarán desde cero, es decir;

fila 0
fila 1
fila 2
...
fila n-1

y en las columnas lo mismo

columna 0
columna 1
columna 2
....
columna n-1


un ejemplo de cómo poner las variables sería:

int numeros [2][3]; esta tendrá 2 filas y 3 columnas
char letras [3][2]; esta tendrá 3 filas y 2 columnas

Agregar elememtos a la matriz

int numeros [2][3]={1,2,3 , 4,5,6};

            1 2 3
            4 5 6
(algo así quedaría graficamente pero en forma de tabla)

cout<<numeros[1][2]; //6 //esto es para imprimir cierto número, dando las indicaciones de dónde se encuentra con fila y columna
cout<<numeros[0][1]; //2

otra manera de agregar los elementos a la matriz

int numeros[2][3]={{1,2,3},{4,5,6}} //es más ordenada

otra manera

int numeros[2][3]={1,2,3,
                   4,5,6};
                   
                   
/*Ej.1 Hacer un programa para rellener una matriz pidiendo al usuario el número de filas
y columnas, posteriormente mostrar la matriz en pantalla. */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas;
	
	cout<<"Digite el numero de filas: ";cin>>filas;
	cout<<"Digite el numero de columnas: ";cin>>columnas;
	
	//se alamacenan elementos en la matriz
	for(int i=0; i<filas; i++){ // cada uno de estos bucles controla las filas y las columnas. Están anidados
		for(int j=0; j<columnas; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";cin>>numeros[i][j]; //aparecerá así [0][0] e iremos ingresando los números
		}
	}
	//mostrando la matriz
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	
	system("pause");
	return 0;
}


