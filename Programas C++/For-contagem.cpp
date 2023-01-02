/*
Faça um programa usando a estrutura “para” que leia um número inteiro
positivo e mostre na tela uma contagem de 0 até o valor digitado:
Ex: Digite um valor: 9
Contagem: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, FIM!
*/


#include <iostream>
using namespace std;
int main(){
	
	int cont;
	
	cout << "Digite um numero: ";
	cin >> cont;
	cout << "Contagem: ";
	
	for(int i = 0; i <= cont; i++){
		cout << i << ", ";
	}
	
	cout << "FIM!";
		
	return 0;
}
