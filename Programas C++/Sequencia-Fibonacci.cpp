/*[DESAFIO] Faça um programa que mostre os 10 primeiros elementos da Sequência
de Fibonacci:*/


#include <iostream>
using namespace std;
int main(){
	
	int t1 = 1, t2 = 1, t3;
	
	cout << t1 << " " << t2 << " ";
	
	for(int i = 3;i<=10;i++){
		t3 = t1 + t2;
		cout << t3 << " ";
		t1 = t2;
		t2 = t3;
	
	}	
	
	
	return 0;
}
