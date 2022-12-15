/*Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final:
a) Quantos homens foram cadastrados
b) Quantas mulheres foram cadastradas
c) A média de idade do grupo
d) A média de idade dos homens
e) Quantas mulheres tem mais de 20 anos
*/

#include <iostream>

using namespace std;

int main(){
	
	int cont = 1, idade, sexo;
	int sexom = 0, sexof = 0, idademedia = 0, idadem = 0, idadef = 0;
	
		
	while(cont <= 5){
		
		cout << "Informe o sexo da pessoa: [1 p/ Masculino & 2 p/ Feminino]...e informe a idade: " << endl;
		cin >> sexo;
		
		cout << "Informe a idade:  " << endl;
		cin >> idade;
		
		if(sexo == 1){
			sexom++;
			idadem = idade + idadem; 
		}
		else {
			sexof++;
		}
		if(sexo == 2 && idade > 20){
			idadef++;
		}
		
		idademedia = idade + idademedia;
	
		cont++;
	}

	cout << endl;
	cout << "-------------------------------------------------------\n";
	cout << "Homens cadastrados: " << sexom << endl;
	cout << "Mulheres cadastrados: " << sexof << endl;
	cout << "Média de idade do grupo: " << idademedia/5 << endl;
	cout << "Média da idade dos Homens: " << idadem/sexom << endl;
	cout << "Mulheres com mais de 20 anos: " << idadef << endl;
	
	return 0;
}

