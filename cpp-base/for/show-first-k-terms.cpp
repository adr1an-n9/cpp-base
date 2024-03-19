#include <iostream>
using namespace std;
int main()
{
    int k, i;
    
    cout << "k= ";
    cin >> k;
    
    for ( i = 1; i <= k; i++ )
        cout << i*i+1  << " "; 
        
    return 0;
}
