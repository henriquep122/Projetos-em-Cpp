//Usando ARRAY e Vetores
#include <iostream>
#include <string>

using namespace std;

struct clientes{
	
	int cliente_id;
	string nome;
	int idade;
	
};

int main(){
		
	clientes meu_cliente[10];
	
	cout << "Entre com o Id do cliente: ";
	cin >> meu_cliente[0].cliente_id;
	
	cout << "Informe o nome do cliente: ";
	cin >> meu_cliente[0].nome;
	
	cout << "Informe a idade do cliente: ";	
	cin >> meu_cliente[0].idade;
	
	cout << endl;
	
	cout << "Id do meu_cliente: " << meu_cliente[0].cliente_id << endl;
	cout << "Nome do meu_cliente: " << meu_cliente[0].nome << endl;
	cout << "Idade do meu_cliente: " << meu_cliente[0].idade << endl;
	cout << endl;
			
	return 0;
}




// Usanso tipo CHAR e IOMANIP

/*#include <iostream>
#include <iomanip>

using namespace std;

struct clientes{
	
		int meu_cliente_id;
		char nome[30];
		int idade;
		float salario;
};

int main(){
	
	clientes meu_cliente[10];
	
	cout << "Informe o Id do cliente: ";
	cin >> meu_cliente[0].meu_cliente_id;
	
	cout << "Informe o nome do cliente: ";
	cin >> meu_cliente[0].nome;
	
	cout << "Informe a idade do cliente: ";
	cin >> meu_cliente[0].idade;
	
	cout << "Informe o salário do cliente: ";
	cin >> meu_cliente[0].salario;	
	
	cout << endl;
	
	cout << meu_cliente[0].meu_cliente_id << endl;
	cout << meu_cliente[0].nome << endl;
	cout << meu_cliente[0].idade << endl;
	cout << fixed << setprecision(3) << meu_cliente[0].salario << endl;
	
	return 0;
}
*/
