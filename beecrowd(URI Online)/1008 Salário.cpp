/*Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. 
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.*/

#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    int fun, hor;
    double pag, sala;
    
    cin >> fun >> hor >> pag;
    
    sala = hor * pag;
    
    cout << fixed << setprecision(2);
    cout << "NUMBER = " << fun << endl;
    cout << "SALARY = U$ " << sala << endl;
 
    return 0;
}
