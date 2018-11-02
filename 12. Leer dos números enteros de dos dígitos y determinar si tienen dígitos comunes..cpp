#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	// variables
	int n1, n2, primero1, res1, primero2, res2;
	
	cout<<"ingrese numero 2 numeros de dos digitos   ";
	
		cout<<"ingrese numero 1 :   ";
		cin>> n1;
		
		cout<<"ingrese numero 2 :   ";
		cin>> n2;
		
		// Decision para que los dos numeros sean  solo 2 digitos
		if( n1 <= 9 || n1 >= 100   &&  n2 <= 9 || n2 >= 100)
		{
				cout<<" alguno de los numeros no tiene 2 digitos intentelo de nuevo";
				return(0);	
		}		
		
	      else  primero1 = n1 / 10;  // primer digito del numero 1
	        res1 = n1 % 10;      // segundo digito del numero 2
	
	        primero2 = n2 / 10;  // primer digito del numero 2
	        res2 = n2 % 10;      // segundo digito del numero 2
	    
		// Decision general numero 
	     if( primero1 == res1 || primero1 == res2 || primero1 == primero2 )
		
	       {
	
	         	cout<<"este digito  de primer numero  repetido  :" <<primero1;
		
			}
		
		else { 	cout<<"este no esta repetido  :" <<primero1 ;
		}
			
			 if( primero2 == res1 || primero2 == res2 || primero2 == primero1 )
			 
			  {
	
	         	cout<<"este digito  de segundo numero repetido  :" <<primero2;
			}
				
		else { 	cout<<"este no esta repetido  :" <<primero2 ;
		}
			
			if( res1 == res2 || res1 ==  primero1 || res1 ==  primero2 )
			 
			  {
	
	         	cout<<"este digito de primer numero repetido  :" <<res1;
			  }
			  
		else { 	cout<<"este no esta repetido  :" <<res1;
		}
		
			
			if( res2 == res1 ||  res2 ==  primero1 || res2 == primero2)
			 
			  {
	
	         	cout<<"este digito  de segundo numero repetido  :" <<res2;
	        }
	        
	    else { 	cout<<"este no esta repetido  :" <<res2;
		}
	        
		
			
    return(0);	
}
			

