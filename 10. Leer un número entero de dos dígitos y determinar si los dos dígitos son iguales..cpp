#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	
	int n, primero, res;
		cout<<"ingrese numero  :   ";
		
		cin>> n;
		
		
		if( n > 99 || n < 10 )
		{
				cout<<"numero no tiene 2 digitos";
				return(0);	
		}		
		
	else 

	
	primero = n / 10;
	res = n % 10;

	
	
	if( primero == res )
		{
				cout<<"el digito 1 es igual al 2";
				
		}	
			
	else cout<< "los 2 digitos no son iguales ";
	
	
return(0);	
}

