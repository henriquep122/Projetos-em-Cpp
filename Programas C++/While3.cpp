/*Faça um aplicativo que leia o preço de 8 produtos. No final, mostre na tela
qual foi o maior e qual foi o menor preço digitados.
*/

#include <iostream>

using namespace std;

int main(){
	
	int cont = 1;
	double produto, maior, menor;
		
	while(cont <= 8){
		
		cout << "Informe o valor do produto? " << endl;
		cin >> produto;
		
	    	    
	    if(cont == 1){
			maior = produto;
			menor = produto;
		} 
		else{
			if(produto > maior){
				maior = produto;
			}
			
			if(produto < menor){
				menor = produto;
			}
		}
		cont++;
	}
	
	cout << "-------------------RESULTADO----------------------\n";
	cout << endl;	
	cout << "O maior valor digitado foi: " << maior << endl;		
	cout << "O menor valor digitado foi: " << menor << endl;		
			
	return 0;
}
