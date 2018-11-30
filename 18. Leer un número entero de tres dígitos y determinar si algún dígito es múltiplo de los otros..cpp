#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	
	int n, n1, n3, n2, res, final1, final2, final3;
	
	
    	cout<< "ingrese un numero" <<endl;   cin >>n;

    	
	if (n <= 99 || n >= 1000){
	     cout<<"ingrese un numero de solo 3 digitos "<<endl;
	    	}
	       
          n1 = n / 100;  
	    res = n % 100;
	    n2 = res / 10;
	    n3 = res % 10;
	     
	  
	    cout<<"el primer numero es :"<<n1<<endl;
	    cout<<"el segundo numero es :"<<n2<<endl;
	    cout<<"el tercer numero es :"<<n3<<endl;
	    
	    final1 = n1 % n2;
	    final2 = n1 % n3;
	    final3 = n2 % n3;
	 

	if (final1 == 0) {
		     cout << "el primer digito es multiplo de el segundo digito"<<endl;
			
	} 
	 else {
	 
         	cout << " el primer digito no  es multiplo de el segundo digito"<<endl;
	} 
	
	
	if (final2 == 0) 
	{
	     	cout << "el primer digito es multiplo de el tercer digito"<<endl;
	}
	
	else  {
	       cout << " el primer digito no multiplo de el tercer digito"<<endl;
	      }

    if (final3 == 0) 
	{
		cout << "el segundo digito es multiplo de el tercer digito"<<endl;
	}
	
	else  {
         	cout << " el segundo digito no multiplo de el tercer digito"<<endl;
          }


	
	
	
	

	return(0);
}

