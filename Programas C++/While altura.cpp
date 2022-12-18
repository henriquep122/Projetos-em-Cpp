/*Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando
no final:*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double pessoas, peso, altura, media_altura = 0;
	int cont = 1, cont_peso_maior = 0, cont_peso_menor = 0, cont_altura = 0;
	
	cout << "Informe a quantidade de pessoas a serem cadastradas: " << endl;
	cin >> pessoas;
		
	while(cont <= pessoas){
		
		cout << "Informe seu peso e sua altura: " << endl;
		cin >> peso >> altura;
		
		if(peso >= 90){
			cont_peso_maior++;
		}
		if(peso <= 50 && altura < 1.60){
			cont_peso_menor++;
		}
		if(altura >= 1.90 && peso >= 100){
			cont_altura++;
		}
		
		media_altura = media_altura + altura; 
		
		cont++;
	}
	
	cout << "=====================================================" << endl;
	cout << endl;
	cout << "Média de altura do grupo: " << fixed << setprecision(2) << media_altura/pessoas << endl;
	cout << "Pessoas que pesam mais de 90Kg: " << cont_peso_maior << endl;
	cout << "Pessoas que pesam menos de 50Kg e tem menos de 1.60m: " << cont_peso_menor << endl;
	cout << "Pessoas que medem mais de 1.90m e pesam mais de 100Kg: " << cont_altura << endl;
	
	return 0;
}
