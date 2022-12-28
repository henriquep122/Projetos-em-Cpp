/*
Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas.
O programa vai perguntar se o usuário quer ou não continuar. No final, mostre:
a) O nome da pessoa mais velha
b) O nome da mulher mais jovem
c) A média de idade do grupo
d) Quantos homens tem mais de 30 anos
e) Quantas mulheres tem menos de 18 anos
*/
#include <iostream>
#include <string.h>


using namespace std;

int main(){
	
	char resp = 's';
	string nome, sexo, nome_pessoa_mais_velha, nome_mulher_mais_joven;
	int cont = 0, idade = 0, idade_pessoa_mais_velha = 0, idade_mulher_mais_jovem = 0, soma_idade = 0, homens_maior = 0, mulheres_menor = 0;
	double media_idade;
	
		
	while(resp == 's'){
		
		cout << "Informe o sexo: [m/f] ";
		cin >> sexo;
		if(sexo != "f" && sexo != "m"){
			
			cout << endl;
			cout << "ERRO - Favor digitar f ou m \n";
			
			cout << endl;
			cout << "Quer continuar? [s/n] ";
			cin >> resp;
			cout << endl;
		}
		
		cout << "Informe o nome: ";
		cin >> nome;
		
		cout << "Informe a idade: ";
		cin >> idade;
		if(idade > 120 or idade < 0){
		
			cout << endl;
			cout << "ERRO - Favor digitar uma idade valida";
			cout << endl;
		}
	
		cont++;
				
		if(cont == 1){
			idade_pessoa_mais_velha = idade;
			nome_pessoa_mais_velha = nome;
		}else{
			if(idade > idade_pessoa_mais_velha){
				idade_pessoa_mais_velha = idade;
				nome_pessoa_mais_velha = nome;
			}
		}
		
		if(sexo == "f"){
			nome_mulher_mais_joven = nome;
		}else{
			if(idade < idade_mulher_mais_jovem){
				nome_mulher_mais_joven = nome;
			}
		}
		
		if(sexo == "m" && idade >= 30){
			homens_maior++;
		}else{
			if(sexo == "f" && idade <= 18){
				mulheres_menor++;
				}
		}
			
		soma_idade += idade;
		
		cout << endl;
		cout << "Quer continuar? [s/n] ";
		cin >> resp;
		cout << endl;
			
	}
	
	media_idade = soma_idade/cont;
	cout << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "O nome da pessoa mais velha é: " << nome_pessoa_mais_velha << endl;
	cout << "O nome da mulher mais jovem é: " << nome_mulher_mais_joven << endl;
	cout << "A média de idade do grupo é de: " << media_idade << " anos." << endl;
	cout << "Quantidade de homens com mais de 30 anos: " << homens_maior << endl;
	cout << "Quantidade de mulheres com menos de 18 anos: " << mulheres_menor << endl;
	
	return 0;
}


