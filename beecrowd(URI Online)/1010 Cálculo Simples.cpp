/* Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. 
Após, calcule e mostre o valor a ser pago. */

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int cp, cp2, np, np2;
    double vp, vp2, vl, vl2, t;
    
    cin >> cp >> np >> vp;
    cin>> cp2 >> np2 >> vp2;
 
    vl = np * vp;
    vl2 = np2 * vp2;
    
    t = vl + vl2;
    
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << t << endl;
 
    return 0;
}
