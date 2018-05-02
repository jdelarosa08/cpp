#include <iostream>
#include <stdlib.h> // para pausar el programa usando System("PAUSE") diferente a usar la funcion getch()
#include <conio.h> // para pausar el programa de otra forma. diferente a System("PAUSE") --> con la funcion getch()  no es necesario usar \n\n para el enter y brinco de liena.


int num = 50; // variables numericas entera. 
int num2 = 150;
int result = num + num2; // operacion numericas enteras.

char uncaracter = 'a'; // recibe un caracter usando char y ''
char* muchoscaracter = "Codigo Facilito test";  // recibe multiplecarateres usando  Char* y ""

bool variablebooleana = false; // variable booleana que retoran 0 o 1 si es falso o true... 

using namespace std;

int main()
{
	cout <<"Primer Resultado Numerico:" <<  result << "\n\n" << endl;
	cout <<"Primer Resultado Caracteres:" <<  uncaracter << "\n\n" << endl;
	cout <<"Segundo Resultado Caracteres:" <<  muchoscaracter << "\n\n" << endl;
	cout <<"Resultado Booleando:" << variablebooleana << "\n\n" <<endl;
	
	// tambien se pude declarar dentro de las funciones 
	float num3 = 2.567; // es mas limitado que los double al momento de operaciones con numeros grande y muchos decimales. 
	float num4 = 1.5;
	cout << "Resultados de Float" << num3 + num4 << endl;
	
	double num5 = 15.458520
	
	getch();
	//system ("PAUSE");
	return 0; 
}

