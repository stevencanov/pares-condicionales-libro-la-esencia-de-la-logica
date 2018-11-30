#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{

int n1, n2, difer, primo, aux, resta;

cout<<"ingrese numero 1 : ";
cin>> n1;

cout<<"ingrese numero 2 : ";
cin>> n2;

cout<< "el primer numero es :"<<n1 <<endl;
cout<< "el segundo numero es :"<<n2 <<endl;


difer = n1 - n2;
primo = difer % 2 ;

cout<< "la diferencia es :"<<difer <<endl;

if (primo == 0 || primo == difer) {
	cout<<"no es primo"<<endl;
	
	

}
else{
		cout<<"si es primo"<<endl;

	}
return(0);
}

