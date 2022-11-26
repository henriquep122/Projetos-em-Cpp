#include <iostream>
using namespace std;

int main(){
	
	int numero;
	
	cout << "Qual numero deseja saber em ingles? (1 a 5) ";
	cin >> numero;
	
	switch (numero){
		
		case 1 : cout << "One"; break;
	
		case 2 : cout << "Two"; break;
	
		case 3 : cout << "Three"; break;
	
		case 4 : cout << "Four"; break;
	
		case 5 : cout << "Five"; break;
		
		default:
			cout << "I don't know :( "; break;
		
	}
	
	return 0;
}
