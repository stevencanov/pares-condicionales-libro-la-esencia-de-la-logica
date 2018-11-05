
#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	
	int n, n1, n3, n2, res;
	
	
    	cout<< "ingrese un numero" <<endl;   
      cin >>n;

    	
	if (n <= 99 || n >= 1000){
	     cout<<"ingrese un numero de solo 3 digitos "<<endl;
	    	}
	   else {
		          n1 = n / 100;  
			    res = n % 100;
			    n2 = res / 10;
			    n3 = res % 10;
			     
			  
			    cout<<"el primer numero es :"<<n1 <<endl;
			    cout<<"el segundo numero es :" <<n2 <<endl;
			    cout<<"el tercer numero es :" <<n3 <<endl;

		if (n1 == n3) {
			cout<<"el primer y el tercer numero son iguales :"<<n1 <<endl;
		}

		else {
			cout<<" no hay numeros repetido" <<endl;
		}

	}    
          


	return(0);
	
}