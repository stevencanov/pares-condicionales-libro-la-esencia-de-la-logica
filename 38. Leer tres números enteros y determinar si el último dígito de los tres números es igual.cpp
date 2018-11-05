#include <iostream>
	#include <stdio.h>

	using namespace std;

	int main()

	{
		
		int n1, n3, n2, number1, number2, number3 ;
		
		
	cout<< "ingrese un numero 1 :: " <<endl;
	cin >>number1;
	
	 cout<< "ingrese un numero 2 ::" <<endl;;
	 cin >>number2; 
	
	 cout<< "ingrese un numero3 :: " <<endl;;
	cin >>number3;

//	    	 limite de digitos entre 999 y 9999
	number1 = number1 % 10;   // primero digito 
	number2 = number2 % 10; // segundo digito
      number3 = number3 % 10; // tercer digito
					
					
					    cout<<"el primer numero es :"<<number1 <<endl;
					    cout<<"el segundo numero es :"<<number2 <<endl;
					    cout<<"el tercer numero es :"<<number3 <<endl;
					    cout<<"////////////////////"<<endl;
					
		if (number1 == number2 && number1 == number3 && number3 == number2) {
			  cout<< "los ultimos digitos si son iguales" <<endl;
			  cout<< "////////////////////" <<endl;
		}
		
		else {
			cout<< "los ultimos digitos no son iguales" <<endl;
		}
		
return (0);					
}
