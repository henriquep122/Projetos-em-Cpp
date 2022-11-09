#include <iostream>
using namespace std;

int main(){

	double massa, altura, IMC;
	
	cout << "Informe seu peso atual: ";
	cin >> massa;
	cout << "Informe sua altura: ";
	cin >> altura;
	
	IMC = massa / (altura * altura);
	
	cout << "Seu IMC é de: " << IMC << endl;
	
	if (IMC <= 18.4)		
		cout << "Você está com desnutrição grau 1";
			if (IMC >= 18.5 && IMC < 24.9 )
				cout << "Você está no peso ideal";
					if (IMC >= 25 && IMC < 29.9)
					cout << "Você está com sobrepeso";
						if (IMC >= 30 && IMC < 34.5)
						cout << "Você está com obsidade grau 1";
							if (IMC >= 35 && IMC < 39.5)
							cout << "Você está com obsidade grau 2";
								if (IMC >= 40 && IMC < 55.9)
								cout << "Você está com obsidade grau 3";
								else 
								cout << "Você esta com alto risco de morte";
								
	return 0;

}
