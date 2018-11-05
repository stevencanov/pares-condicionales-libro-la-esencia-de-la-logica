#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
	long int n1, n2, n3;
	
	cout << "??? ingresar 3 numeros. ?????? "<<endl;
	
	cin >> n1;
	
	cin >> n2;
	
	cin >> n3;
//213
  if (n1 > n2 && n1 < n3 && n3 > n1) {
	cout << n3 <<endl;
	cout << n1 <<endl;
	cout << n2 <<endl;
  }

//123
  if (n1 < n2 && n2 < n3 && n3 > n1) {
	cout << n3 <<endl;
	cout << n2 <<endl;
	cout << n1 <<endl;
  }

//321
  if (n1 > n2 && n2 > n3 && n3 < n1) {
	cout << n1 <<endl;
	cout << n2 <<endl;
	cout << n3 <<endl;
	
  }

//312
  if (n1 > n2 && n2 < n3 && n3 < n1) {
	cout << n1 <<endl;
	cout << n3 <<endl;
	cout << n2 <<endl;
	
	
  }
	
	 if (n1 < n2 && n2 > n3 && n3 < n1) {
		
		cout << n2 <<endl;
		cout << n1 <<endl;
		cout << n3 <<endl;
	

	}
	
	return(0);
	
}