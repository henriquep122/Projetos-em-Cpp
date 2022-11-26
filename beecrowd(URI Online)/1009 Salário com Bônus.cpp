/* Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). 
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais. */

#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    string nome;
    double salario, vendas, total;
    
    getline(cin, nome);
    cin >> salario >> vendas;
    
    total = salario + ((vendas*15)/100);
    
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;
    
    return 0;
}
