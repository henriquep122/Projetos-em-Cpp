#include <iostream>
#include <math.h>
#include <iomanip> 
 
using namespace std;
 
int main() {
	
	setlocale (LC_ALL,"");
 
    double area, raio;
    
    double n = 3.14159;
    
    cin >> raio;
    
    area = pow(raio,2) * n;
    
    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;
    
    return 0;
}

