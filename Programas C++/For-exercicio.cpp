/*Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura
“para”. No final, mostre na tela:
a) Quantas mulheres foram cadastradas
b) Quantos homens pesam mais de 100Kg
c) A média de peso entre as mulheres
d) O maior peso entre os homens
*/

#include <iostream>
#include <string.h>
using namespace std;
int main(){
	
	int peso, cont_mulher = 0, homens_pesados = 0, peso_mulher = 0, maior_peso_homen = 0;
	string sexo;
	
	
	
	for(int i=1;i<=4;i++){
		
		cout << "Informe o sexo da pessoa [f = feminino | m = masculino]: ";
		cin >> sexo;
		cout << "Informe o peso dessa pessoa: ";
		cin >> peso;
		cout << endl;
		
		if(sexo == "f"){
			cont_mulher++;
			peso_mulher = (peso_mulher + peso)/cont_mulher;
		}else if(sexo == "m" && peso >= 100){
			homens_pesados++;
		}	
		
		if(sexo == "m" && peso > maior_peso_homen){
			maior_peso_homen = peso; 
		} else{ 
			if(maior_peso_homen < peso){
				maior_peso_homen = peso;
			}
		}
			
	}			
				
	cout << "------------------------------------------------------" << endl;
	cout << "Quantidades de mulheres cadastradas: " << cont_mulher << endl;
	cout << "Homens que pesam mais de 100Kg: " << homens_pesados << endl;
	cout << "A média de peso entre as mulheres é dé: " << peso_mulher << endl;
	cout << "O maior peso entre os homens é dé: " << maior_peso_homen << endl;
	
	return 0;
}
