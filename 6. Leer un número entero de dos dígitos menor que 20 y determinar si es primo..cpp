#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	
	int n, primero, res, final, suma;
		cout<<"ingrese numero  :   ";
		
		cin>> n;
		
		
		if( n >= 20 || n <= 0 )
		
		{
				cout << "numero no aplica";
				return(0);
				
		}	
		

    if( n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19)
        
	    {
		cout << "el numero   es primo :" << n;
					
		}	
		
	else  { cout<< "el numero  no es primo : "<< n;
	}

	
	
	
	
	
					
			

	return(0);
}





