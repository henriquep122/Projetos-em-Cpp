#include <iostream>
#include <string.h>
using namespace std;
int main(){
	
	string nome[] = {"Mauro","Ana","Paulo","Elizeu","Mario"};
	double nota[] = {5.5, 9.5, 2.5, 6.0, 9.0};
	
	cout << "===================================" << endl;
	cout << "          Listas de Notas          " << endl; 
	cout << "===================================" << endl;
	
	for(int i = 0;i<5;i++){
		cout << nome[i] << "\t\t\t\t" <<nota[i] << " " << endl;
	}
	
	
	return 0;
}
