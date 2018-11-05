#include <iostream>
	#include <stdio.h>

	using namespace std;

	int main()

	{
		
		int n, n1, n3, n2, resultado;
		
		
	    	cout<< "ingrese un numero" <<endl;   cin >>n;

	    	
		if (n >= 1000){
		     cout<<"ingrese un numero menor a 1000 "<<endl;
		    	}
		
		 else {
					    cout<<"el  numero es :"<< n <<endl;
					    cout<<"///////////////////////"<<endl;
					
					if (n <= 9) {
						cout<<"el numero tiene  " <<endl;  resultado = 1;
						cout<< resultado <<endl;
						cout<<"digito" <<endl;
			
					}
					
					if (n >= 10 && n <= 100 ) {
						cout<<"el numero tiene  " <<endl;  resultado = 2;
						cout<< resultado <<endl;
						cout<<"digitos" <<endl;
			
					}
					
					if (n >= 100 && n <= 999 ) {
						cout<<"el numero tiene  " <<endl;  resultado = 3;
						cout<< resultado <<endl;
						cout<<"digitos" <<endl;
			
					}
					
					

			}	
		return (0);			
					
		}