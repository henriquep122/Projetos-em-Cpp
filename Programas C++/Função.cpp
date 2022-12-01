#include <iostream>
#include <string>

using namespace std;

//Prototipo da função	

void imprime(string mensagem);
void tabuada ( int numero );
	
int main(){
	
	int numero;
	
	imprime("Programa Função");	
	tabuada(numero);
	cin >> numero;
			
	return 0;
}



// Implementar a função

void tabuada ( int numero ){
	
	cin >> numero;
	cout << "Tabuada do " << numero << endl;
	for( int i=1; i<=10; i++ ){
	
		cout << numero << " x " << i << " = " << numero*i << endl; 
	}
	
	
}

void imprime(string mensagem){
	cout << endl;
	cout << mensagem << endl;
	cout << endl;
}

