#include <iostream>
using namespace std;

int main(){
	
	int a, b, c;
	
	cout << "Favor informe um valor: ";
	cin >> a;
	cout << "Favor informe outro valor: ";
	cin >> b;
	
	c = a;
	a = b;
	b = c;
	
	cout << "O valor de A: " << a << "\n" << "O valor de B: " << b << "\n";
	
	
	
	return 0;
	
}
