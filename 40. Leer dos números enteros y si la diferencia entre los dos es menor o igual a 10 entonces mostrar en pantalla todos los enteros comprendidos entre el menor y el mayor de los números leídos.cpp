#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	
	int n1, n2, aux, resta;
	
		cout<<"ingrese numero 1 : ";
		cin>> n1;
		
		cout<<"ingrese numero 2 : ";
		cin>> n2;
		
		cout<< "el primer numero es :"<<n1 <<endl;
		cout<< "el segundo numero es :"<<n2 <<endl;
		
	
	if(n2 < n1 ){
		aux=n1;
		n1=n2;
		n2=aux;
		
			}
			
			resta = n2-n1;
		
		if(resta <= 10 ){
			
			if(resta==1){
					
					cout<< n1+1 <<endl;	
			}
			if(resta==2){
					
					cout<< n1+1 <<endl;
					cout<< n1+2 <<endl;	
			}
			if(resta==3){
					
					cout<< n1+1 <<endl;
					cout<< n1+2 <<endl;
					cout<< n1+3 <<endl;
						
			}
			if(resta==4){
					
					cout<< n1+1 <<endl;
					cout<< n1+2 <<endl;
					cout<< n1+3 <<endl;
					cout<< n1+4 <<endl;
						
			}
			if(resta==5){
					
					cout<< n1+1 <<endl;
					cout<< n1+2 <<endl;
					cout<< n1+3 <<endl;
					cout<< n1+4 <<endl;
					cout<< n1+5 <<endl;
						
			}
			
			if(resta==6){
					
					cout<< n1+1 <<endl;
					cout<< n1+2 <<endl;
					cout<< n1+3 <<endl;
					cout<< n1+4 <<endl;
					cout<< n1+5 <<endl;
					cout<< n1+6 <<endl;
						
			}
			
			if(resta==7){
					
					cout<< n1+1 <<endl;
					cout<< n1+2 <<endl;
					cout<< n1+3 <<endl;
					cout<< n1+4 <<endl;
					cout<< n1+5 <<endl;
					cout<< n1+6 <<endl;
					cout<< n1+7 <<endl;
						
			}
			
			if(resta==8){
					
					cout<< n1+1 <<endl;
					cout<< n1+2 <<endl;
					cout<< n1+3 <<endl;
					cout<< n1+4 <<endl;
					cout<< n1+5 <<endl;
					cout<< n1+6 <<endl;
					cout<< n1+7 <<endl;
					cout<< n1+8 <<endl;
						
			}

			if(resta==9){
					
					cout<< n1+1 <<endl;
					cout<< n1+2 <<endl;
					cout<< n1+3 <<endl;
					cout<< n1+4 <<endl;
					cout<< n1+5 <<endl;
					cout<< n1+6 <<endl;
					cout<< n1+7 <<endl;
					cout<< n1+8 <<endl;
					cout<< n1+9 <<endl;
						
			}
			if(resta==10){
					
					cout<< n1+1 <<endl;
					cout<< n1+2 <<endl;
					cout<< n1+3 <<endl;
					cout<< n1+4 <<endl;
					cout<< n1+5 <<endl;
					cout<< n1+6 <<endl;
					cout<< n1+7 <<endl;
					cout<< n1+8 <<endl;
					cout<< n1+9 <<endl;
					cout<< n1+10 <<endl;
						
			}
			
			
			}
			else {
				cout<<"no aplica"<<endl;
		}
		
		return(0);
}