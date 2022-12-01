#include <iostream>	
#include <math.h>

using namespace std;

int main(){
	
	int a, b, c, d;
	
	cout << "Informe os valores de a, b, c e d: " << endl;		
	cin >> a >> b >> c >> d;
	cout << endl;
	
	cout << "a=" << a << " - " << "b=" << b << " - " << "c=" << c << " - " << "d=" << d << endl;
	cout << endl;
		
	cout << "a + b: " << a + b << endl;
	cout << "a/c: " << a / b << endl;
	cout << "a²: " << pow(a,2) << endl;
	cout << "b * c: " << endl;
	cout << "a * b – c: " << a * b-c << endl;
	cout << "a + b * c: " <<  (a + b) * c << endl;
	cout << "sin(a): " << sin(a) << endl;
	cout << "sqrt(b): " << sqrt(b) << endl;
	cout << "a + b + c: " << a + b + c << endl;
	cout << "a * b * c: " << a * b * c << endl;
	cout << "(a + b + c) / d: " << (a + b + c) / d << endl;
	cout << "(a + b) * (a – d): " << (a + b) * (a - d) << endl;
	cout << "(b / c) + (a * d): " << (b / c) + (a * d) << endl;
	cout << "sin(b) + cos(c): " << sin(b) + cos(c) << endl;
	cout << "log(a) – log c: " << log(a) - log(c) << endl;
	cout << "log(a) + (log(b) * log(d) – cos(log(c))): " << log(a) + (log(b) * log(d) - cos(log(c))) << endl;
	cout << "(b + a)/c - (d + a): " << (b + a)/c - (d + a) << endl;	
	cout << "(cos(d) + sin(c)) * (cos(b) - sin(a)): " << (cos(d) + sin(c)) * (cos(b) - sin(a)) << endl;
	
	cout << "=============================================================================== "<< endl;
	cout << endl;
	
	cout << "Informe mais 3 valores para mais calculos: " << endl;
		
	double x, y, z;
	
	cin >> x >> y >> z;
	cout << endl;
	
	cout << "Média de x, y e z: " << (x + y + z)/3 << endl;
	cout << "Média ponderada: " << (x*3 + y*4 + z*5)/12 << endl;
	cout << "Perímetro de um círculo de raio x: " << (3.14 * x) * 2 << endl;
	cout << "área de um círculo de raio x: " << 3.14 * pow(x,2) << endl;
	cout << "área de um triângulo de base x e altura y: " << (y * z) / 2 << endl;
	cout << "hipotenusa de um triângulo retângulo, cujos lados conhecidos são y e z: " << sqrt(pow(y,2) + pow(z,2)) << endl;
		
	cout << "=============================================================================== "<< endl;
	cout << endl;
	
	cout << "Calculo de raizes de equação do 2 grau" << endl;
	cout << endl;
			
	float A,B,C;
	float delta, x1,x2;
	 
	cout << "Entre com os coeficientes da equaçao: " << endl;
	
	cin >> A >> B >> C;
	
	delta = (pow(B,2)) - (4*A*C);
	
	if (delta >= 0) {

		x1 = (-B + sqrt(delta))/2*A;
		x2 = (-B - sqrt(delta))/2*A;
		cout << endl;
		 
		cout << "delta: " << delta << endl;
		cout << endl;
		cout << "As raizes reais sao: raiz X1, X2 = " << x1 << " e " << x2 << endl;
		}
		else {
			cout << "Nao existem raizes reais"; 
		}
		
	return 0;
}
