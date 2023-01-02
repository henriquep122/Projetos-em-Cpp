/*
Escreva um programa que leia um número qualquer e mostre a tabuada desse
número, usando a estrutura “para”.
*/

#include <iostream>
using namespace std;
int main(){
	
	int numero;
	
	cout << "Digite um numero: " << endl;
	cin >> numero;
	
	for(int i = 1; i <= 10; i++){
		
		int multi = numero*i;
		cout << numero << " x " << i << " = " << multi << endl;	
		
	}
	
	
	
	return 0;
}
