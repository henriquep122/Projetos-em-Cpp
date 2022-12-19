/*Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários.
No final, mostre o total de salários pagos aos homens e o total pago às
mulheres. O programa vai perguntar ao usuário se ele quer continuar ou não
sempre que ler os dados de um funcionário.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	int salario = 0, sexo, salariom = 0, salariof = 0;
	
	string sim;

	while(sim != "não"){
		
		cout << "Informe o salario do funcionário(a): " << endl;
		cin >> salario;
		cout << "Informe o sexo do funcionário(a): (1 para Masculino ou 2 para Feminino)" << endl;
		cin >> sexo;
		
		if(sexo == 1){
			salariom = salario + salariom;
		}
		if(sexo == 2){
			salariof = salario + salariof;
		}
		
		cout << "Quer continuar? (digite 'não' para parar!)" << endl;
		cin >> sim;
					
	}
	
	cout << "A soma dos salários dos homens é de: " << salariom << endl;
	cout << "A soma dos salários das mulheres é de: " << salariof << endl;
		
	return 0;
}
