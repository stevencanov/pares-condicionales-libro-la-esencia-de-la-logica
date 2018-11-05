#include <iostream>
	#include <stdio.h>

	using namespace std;

	int main()

	{
		
		int n, n1, n3, n2, n4, res, res2, suma;
		
		
	    	cout<< "ingrese un numero" <<endl;   cin >>n;

	    	
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
					cout<<"///////////////////////////////////////"<<endl;
					
					if (n2 == n3) {
						cout<<"el segundo digito es igual al penultimo " <<endl;

					}
			}	
		return (0);			
					
		}
		