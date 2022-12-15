/*Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final:
a) Qual é a média de idade do grupo
b) Quantas pessoas tem mais de 18 anos
c) Quantas pessoas tem menos de 5 anos
d) Qual foi a maior idade lida
*/

#include <iostream>

using namespace std;

int main(){
	
	int cont = 1, idade, media = 0, Idade_maior = 0, Idade_menor = 0, maior = 0;
	
	while(cont <= 10){
		
		cout << "Informe a idade: ";
		cin >> idade;
						
		media = idade + media; 
		
		if(idade > 18){
			Idade_maior++;
		}
		if(idade < 5){
			Idade_menor++;
		}
		if(cont == 1){
			maior = idade;
		} else {
			if(idade > maior){
				maior = idade;
			}
		  }
		
		cont++;
		
	}
	
	cout << "---------------------------------------------------------------" << endl;
	cout << endl;
	cout << "A media de idade é: " << media/10 << " anos"<< endl;
	cout << "Quantidade de pessoas com idade maior que 18 anos: " << Idade_maior << endl;
	cout << "Quantidade de pessoas com idade menor que 5 anos: " << Idade_menor << endl;
	cout << "Maior idade informada: " << maior << endl;
			
	return 0;
}
