#include <iostream>
#include <iomanip> 
#include <math.h>

using namespace std;
 
int main() {
 
    double a, b, c, pi = 3.14159, tri, cir, tra, qua, ret;
    
    cin >> a >> b >> c;
    
    tri = (a * c)/2;
    cir = pi * pow(c,2);
    tra = ((a + b) * c) / 2;
    qua = pow(b,2);
    ret = a * b;
    
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << tri << endl;
    cout << "CIRCULO: " << cir << endl;
    cout << "TRAPEZIO: " << tra << endl;
    cout << "QUADRADO: " << qua << endl;
    cout << "RETANGULO: " << ret << endl;
    
    return 0;
}
