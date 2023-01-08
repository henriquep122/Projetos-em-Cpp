/*Faça um programa que preencha automaticamente um vetor numérico com 8
posições, conforme abaixo:

999|999|999|999|999|999|999|999|
 0   1   2   3   4   5   6   7
*/

#include <iostream>
using namespace std;
int main(){
	
	int vet[8];
	
	for(int i=0;i<8;i++){
		vet[i] = 999;
		cout << vet[i] << " ";
	}
	
	return 0;
}
