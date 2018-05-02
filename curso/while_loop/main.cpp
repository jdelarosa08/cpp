#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	while(i<=100)
	{
		cout << i << endl;
		//i = i * 2 ;
		i++;
	}
	
	int e = 10;
	do 
	{
		cout << e << endl;
		//e = e * 2 ;
		e++;
	}
	while(e <= 15);
	
	cin.get();
	return 0;
}
