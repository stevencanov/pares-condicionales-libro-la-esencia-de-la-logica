#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	
	int n, n1, n2, n3, n4;
	
	cout<<"ingrese numero : "<<endl;
	cin>> n;
	
	n1 = n / 1000; // primer digito
	n2 = (n / 100) % 10; // segundo digito
	n3 = (n / 10) % 10; // tercer digito
	n4 = n % 10; // ultimo digito		
	
	
if (n1 % n2 == 0) {
	cout<< "el primer digito es multiplo del 2 digito" <<endl;
}

if (n1 % n3 == 0) {
	cout<< "el primer digito es multiplo del 3 digito " <<endl;
}

if (n1 % n4 == 0) {
	cout<< "el primer digito es multiplo del 4 digito "<<endl;
}

else {
	cout<< "el primer digito no es multiplo de ningun otro digito "<<endl;
	}

return(0);
}