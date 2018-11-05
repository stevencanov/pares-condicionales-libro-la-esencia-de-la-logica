#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	
int n, n1, n3, n2, res, 
 // cada vez que hay un numero par este se incrementa
contador;
	
	
			cout<< "ingrese un numero de tres digitos" <<endl;   
			cin >>n;

//		condicion menor de 100 y mayor a 999	
	if (n <= 99 || n >= 1000){
	     cout<<"ingrese un numero de solo 3 digitos "<<endl;
	    	}
	       
	else {
//		 separacion de digito de 3 numeros
		n1 = n / 100;  
	    res = n % 100;
	    n2 = res / 10;
	    n3 = res % 10;
	     
	  
	    cout<<"el primer numero es :"<<n1 <<endl;
	    cout<<"el segundo numero es :" <<n2 <<endl;
	    cout<<"el tercer numero es :" <<n3 <<endl;
	
 //.  condicion de cada numero por si es par
			if (n1 % 2 == 0 ) {
	cout<<"el primer numero es par :"<<n1 <<endl;
	contador++;
	      }
	
	else {
		cout<<"el primer numero no es par :"<<n1 <<endl;
	}
		      if (n2 % 2 == 0 ) {
      cout<<"el segundo numero es par :"<<n2 <<endl;
      contador++;
            }

else {
		cout<<"el segundo numero no es par :"<<n1 <<endl;
	}

	      if (n3 % 2 == 0 ) {
      cout<<"el tercer numero es par :"<<n3 <<endl;
      contador++;

            }
else {
		cout<<"el tercer numero no es par :"<<n1 <<endl;
	}
	
	
//muestra en pantalla la suma de los numeros pares
	
cout<<" digitos  pares :" <<contador <<endl;	
	
                        }  

	
		
		return(0);
	
}