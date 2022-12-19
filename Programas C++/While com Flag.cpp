/*Crie um programa que leia vários números pelo teclado e mostre no final o
somatório entre eles.
Obs: O programa será interrompido quando o número 1111 for digitado*/

#include <iostream>

using namespace std;

int main(){
	
	int n, s = 0;
	
	while(n != 1111){
		
		cout << "Informe um numero: (1111 para parar)" << endl;
		cin >> n;
			
		if(n != 1111){
			s = n + s;
		}
		
	}
	
	cout << "A soma dos valores digitados é de: " << s << endl;
		
	return 0;
}

