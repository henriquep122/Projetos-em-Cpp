#include <iostream>

using namespace std;

int main(){
    
    int a, b, c, m, mABC;
    
    cin >> a >> b >> c;
    
    m = (a+b+abs(a-b))/2;
    mABC = (m+c+abs(m-c))/2;
    
    cout << mABC << " eh o maior" << endl;

    return 0;
     
}
