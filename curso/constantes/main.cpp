#include <iostream>
#include <conio.h>

using namespace std;

const int numero = 12345; // variable que no puede ser alterada o modificada mas delante por ser declarada cosntate. 
const char* strings = "asdfsdf ghadsf ";

int main()
{
 	cout << "Constantes A:" << numero << endl;
	cout << "Constantes B:" << strings << endl;
	getch();
	return 0;
}
