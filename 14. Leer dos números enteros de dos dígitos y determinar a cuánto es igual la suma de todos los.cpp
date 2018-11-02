#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	
	int n1, n2, suma;
	
		cout<<"ingrese numero 1 :   ";
		cin>> n1;
		
		cout<<"ingrese numero 2 :   ";
		cin>> n2;
		
	
		
		if ( n1 >= 100 || n1 <= 9 && n2 >= 100 || n2 <= 9 )
		{
				cout<<" los numeros no tiene 2 digitos";
				
		}		
	
	
		else{
		
			suma = n1 + n2;	
	cout<< "la suma de los dos  numeros es: "<< suma;
            }
	return(0);
}



	
	
	
	
	
	
