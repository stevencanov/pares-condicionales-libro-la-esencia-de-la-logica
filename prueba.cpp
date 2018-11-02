#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	
	int n, n1, res, n2, n3;
	
	
    	cout<<"ingresar numero de 3 digitos";
	
	cin >> n;
	
	
         n1 = n / 100;
	     res = n % 100;
	     n2 = res / 10;
	     n3 = res % 10;
	     
	     
	cout<<"primer numero"<< n1;
		cout<<"segundo numero"<< n2;
			cout<<"tercer numero"<< n3;
			
			
				
					
			

	return(0);
}

