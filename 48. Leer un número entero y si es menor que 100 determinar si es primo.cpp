#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	
int n ;

cout<<"ingrese numero menor de 100 para calcular si es primo "<<endl;
cin >> n;

if (n <= 100) {
    
    
    if (  n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19 || n == 23 || n == 29 || n == 31 || n == 37 || n == 41 ||
               n == 43 || n == 47 || n == 53 ||n == 59 || n == 61 || n == 67 || n == 71 || n == 73 || n == 79 ||n == 83 || n == 89 || n == 97) {
        
        cout<<"si primo  "<< n  <<endl;
    }
    else {
            cout<<"no primo "<< n  <<endl;
    }



}




return(0);
}