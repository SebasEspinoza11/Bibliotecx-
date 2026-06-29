#include <iostream>
#include "arreglos.h"
#include <stdio.h>

using namespace std;
int main(){
	
//	int numeros[] = {5,8,10,15,20,22};
	int arreglo[]= {10,12,11,4,8};
	
//	const double euler = 2.7182
	
//	cout << "Suma del Arreglo: " << sumaArreglo(numeros, 5) << endl; 
//	cout << "Maximo del Arreglo: " << maximo(numeros, 5) << endl; 
//	cout << "Cuadrado del Arreglo: " << endl; 
//	cuadradoArreglo(numeros, 5);
//	imprimirArreglo(numeros, 5);
	
//	cout << "Valor de Pi" << PI << endl;
//	cout << "Valor de euler" << euler<< endl;
	
//	cout << "Elemento encontrado en la posicion: " << busquedaLineal(numeros, 6, 20)<< endl;  
//	cout << "Elemento encontrado en la posicion: " << busquedaBinariaIterativa(numeros, 6, 20)<< endl;  
//	cout << "Elemento encontrado en la posicion: " << busquedaBinariaRecursiva(numeros, 6, 20, 0, 5)<< endl; 
//	
	cout << "Arreglo desordenado: " << endl; 
	imprimirArreglo(arreglo, 5);
	
	quickSort(arreglo, 0, 4);
	
	cout << "Arreglo ordenado" << endl;
	imprimirArreglo(arreglo, 5);



	return 0;
}



