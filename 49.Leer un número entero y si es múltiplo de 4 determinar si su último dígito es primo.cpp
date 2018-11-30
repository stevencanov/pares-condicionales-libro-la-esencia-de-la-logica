#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	
int n, end;

cout<<"ingrese numero"<<endl;
cin>>n;

end = n % 10;

if ( end == 2 || end == 3 || end == 5 || end == 7) {
    cout<<"el ultimo digito es primo"<<endl;
}

else {
    cout<<"el ultimo digito no es primo"<<endl;

}

return(0);
}