#include <iostream>
	#include <stdio.h>

	using namespace std;

	int main()

	{
		
		 long int n, n1, n3, n2, n4, pares, impares;
		
		
	    	cout<< "ingrese un numero" <<endl;   cin >>n;

//	    	 limite de digitos entre 999 y 9999
		if (n <= 999 || n >= 10000){
		     cout<<"ingrese un numero de solo 4 digitos "<<endl;
		    	}
		
		 else {
			         
				n1 = n / 1000; // primer digito
				n2 = (n / 100) % 10; // segundo digito
				n3 = (n / 10) % 10; // tercer digito
				n4 = n % 10; // ultimo digito		     
					
					
					    cout<<"el primer numero es :"<<n1 <<endl;
					    cout<<"el segundo numero es :"<<n2 <<endl;
					    cout<<"el tercer numero es :"<<n3 <<endl;
					    cout<<"el cuarto numero es :"<<n4 <<endl;
					    cout<<"////////////////////"<<endl;
					
					
//					 condicion primer digito
					if (n1 % 2 == 0) {
						      pares++;
					}
						 else {
							impares++;
						      }
//						 condicion 2 digito
						
				     if (n2 % 2 == 0) {
					      pares++;
					       }
					
//						condicion 3 digito					
					 else {
						impares++;
					      }
					      
//						 condicion 3 digito					
					if (n3 % 2 == 0) {
						      pares++;
					}
						 else {
							impares++;
						      }
//						 condicion 3 digito					
					if (n4 % 2 == 0) {
					     pares++;
						}
//						 condicion 4 digito							
					else {
					impares++;
					 }
				
			if (pares > impares) {
				cout<<"el numero tiene mas pares :"<< pares <<endl;
			}
			else {
				cout<<"el numero tiene mas impares :"<< impares <<endl;

			}
			


					
			}	
		return (0);			
					
		}
		