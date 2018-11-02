#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	
	int n, primero, res, final, suma;
		cout<<"ingrese numero  :   ";
		
		cin>> n;
		
		
		if( n >= 100 || n <= 9 )
		{
				cout<<"numero no tiene 2 digitos";
		}		
		
	else 
	
	primero = n / 10;
	res = n % 10;
	suma = primero + res;
	
	cout<< "la suma de los numero es: "<< suma;


	
	
	
	
	
	
	
					
			

	return(0);
}





