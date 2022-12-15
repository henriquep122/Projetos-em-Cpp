#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    
    double L, T, V;
    
    cin >> T >> V;
    
    L = (T*V)/12;
    
    cout << fixed << setprecision(3) << L << endl;
    
    return 0;
}
