#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	
	int n, n1, res, n2;
	
	
    	cout<<"ingresar numero de 3 digitos";
	
	cin >> n;
	
	if (n <= 99 || n >= 1000)
	{
	     cout<<"el numero no es de 3 digitos";
	    
	     
	}
	
        
         n1 = n / 100;
	     res = n % 100;
	     n2 = res / 10;
	     n3 = res % 10;
	
	
	if (n1 > n2 || n1 % n2 == 0 )
	{
		cout << "el primer digito " << n1 << "es multiplo de el segundo digito" << n2 ;
	}
	else  
	
	cout << "el primer digito " << n1 << "no multiplo de" << n2;
	
	
	
	
	
	
	
	
	
	

	return(0);
}

