#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	
	int n, primero, res;
		cout<<"ingrese numero  :   ";
		
		cin>> n;
		
		
		if( n >= 99 || n <= 9 )
		{
				cout<< "numero no tiene 2 digitos" ;
				return(0);
		}		
		
	
	primero = n / 10;
	res = n % 10;

        if ( primero == 2 || primero == 3 || primero == 5 ||primero == 7)
        {
        	cout<<"el primer digito es primo : "<< primero ;
		}
		
	else cout<<"el primer digito no es primo : "<< primero ;
	
	if (res == 2 || res == 3 || res == 5 || res == 7)
	    {
		
        	cout<<"el segundo digito es primo : "<< res ;
	
		}	
	
	else cout<<"el segundo digito no es primo : "<< res ;
	
	
        
     return(0);   
    }
        
	

