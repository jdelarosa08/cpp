#include <iostream>
#include <string>

// los operadores basico los usuales como siempre +, -, *, /, %.
// los operadores igualdad los usuales  == igualdad que ,  != distintos o diferente que , < menor que, > mayor que, <= menor igual que, >= mayor igual que ...
// los operadores logicos  '&&' --> y,  '||' --> or,  '!' -->delante de las sentencia invierte lo resultado a negativo. 
/* sentencias if's  ---  

if()
{
}  
-------------------------------
if ()
{
}
else
{
}
-------------------------------
if()
{
}
else if()
{
}
else
{
}  
---------------------------------
*/

//switch  permite seleccionar multiples opciones ingresando una variable a la funcion switch(varibale) usando case dentro del ella con la funcion o el codigo que realizara cada opcion de esta y en caso seguidos de un break; en caso de no cumplir niguno de los caso o las operaciones se puede agregar una opcion defeault con un codigo. 

using namespace std;

int Num1 = 0;
int Num2 = 0;
int Result = 0;
char operacion;

int main() 
{
	cout << "Va a Realizar alguna Operacion Si[s] o No[n]:" << endl;
	cin >> operacion ;
	if (operacion == 's')
	{
		cout << "seleccione la operacion suma[s], resta[r], multiplicacion[m], division[d], residuo[c]" <<endl;
		cin >> operacion ;
		cout << "Ingrese el primer valor " << endl;
		cin >> Num1; 
		cout << "ingrese el segundo valor " << endl;
		cin >> Num2;
		switch(operacion)
		{
			case 's':
				Result = Num1 + Num2;
				break;
			case 'r':
				Result = Num1 - Num2;
				break;
			case 'm':
				Result = Num1 * Num2;
				break;
			case 'd':
				Result = Num1  / Num2;
				break;
			case 'c':
				Result = Num1 % Num2;
				break;
			default:
				cout << "No es una opcion de operacion basica" << endl;
		}
		cout << "El Resultado es " << Result << endl;
	}
	else
	{
		cout << " No realizara ninguna operacion adios." << endl;
		
	}		
	
	
	//cin.get()	// otro metodo para detener la pantall  usando solo iostream 
	system("PAUSE");
	return 0;
}
