#include <iostream>
using namespace std;

int main(){
	
	int a, b;
	int adicao, subtracao, multiplicacao;
	float divicao, resto;
		
	cout << "Informe o valor A: ";
	cin >> a;
	cout << "Informe o valor B: ";
	cin >> b;
	cout << "--------------------------\n";
		
	adicao = a + b;
	subtracao = a - b;
	multiplicacao = a * b;
	divicao = a / b;
	resto = a % b;
	
	cout << "As operações com os valores " << a << " e " << b << " são...\n";
	cout << "Adição: " << adicao << "\n"; 
	cout << "Subtração: " << subtracao << "\n";
	cout << "Multiplicação: " << multiplicacao << "\n";
	cout << "Divisão: " << divicao << "\n";
	cout << "Resto da divisão: " << resto;
	
	return 0;

}
