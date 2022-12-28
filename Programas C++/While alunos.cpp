/*
Faça um algoritmo que leia a idade de vários alunos de uma turma. O programa
vai parar quando for digitada a idade 999. No final, mostre quantos alunos
existem na turma e qual é a média de idade do grupo.
*/

#include <iostream>

using namespace std;

int main(){
	
	int idade = 0, quant_al = 0, media_idade = 0;
	
	cout << "Informe a idade dos alunos: " << endl;
	
	while(idade != 999){
		
		cin >> idade;
		
		if(idade != 999){
			quant_al++;
			media_idade = (media_idade + idade);
		}
		
	}
	
	cout << endl;
	cout << "Na turma tem: " << quant_al << " alunos." << endl;
	cout << "A media de idade do grupo é de: " << media_idade/quant_al << endl;
	
	return 0;
}
