#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	
	int n, n1, res, n2, n3 ;
		cout<<"ingrese numero de 3 digitos :   ";
		
		cin>> n;
		
		
		if( n >= 1000 || n < 100 )
		{
				cout<< "numero no tiene 3 digitos" ;
		}	
		
	     n1 = n / 100;
	     res = n % 100;
	     n2 = res / 10;
	     n3 = res % 10;
		
		    if( n1 == n2  )
		{
				cout<< "\n1 este primer digito es igual al segundo digito " << n2 ;
		}	
		
		
			if( n1 == n3 )
		{
				cout<< "\n1 primer digito  ,es igual al tercer digito " << n3 ;
		}	
		
			if( n2 == n1  )
		{
				cout<< "\n2 este segundo digito es igual a el primer digito " << n1 ;
		}	
		
			if( n2 == n3  )
		{
				cout<< "\n2 este segundo digito es igual al tercer digito " << n3 ;
		}	
			if( n3 == n1  )
		{
				cout<< "\n3 este tercer digito es igual a el primer digito " << n1 ;
		}	
		
			if( n3 == n2  )
		{
				cout<< "\n3 este tercer digito es igual al segundo digito " << n2 ;
		}	
		
		
	
					
			

	return(0);
}

