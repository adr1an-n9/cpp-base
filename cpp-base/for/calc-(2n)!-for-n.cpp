#include <iostream>
using namespace std;

int main()
{
    int i, n, produs = 1;
    
    cout << "n= ";
        cin >> n;
    
    for ( i = 1; i <= 2*n; i++ )
        produs *= i;
        
    cout << produs;

    return 0;
}
