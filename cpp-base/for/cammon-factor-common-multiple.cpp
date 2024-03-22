#include <iostream>
using namespace std;
int main()
{
    int nr1, nr2, nrfinal, nrfinalmare;
    int k = 0;
    int m = 0;
    
    cout << "nr1 = ";
    cin >> nr1;
    cout << "nr2 = ";
    cin >> nr2;
    
    nrfinal = (nr1 < nr2) ? nr1 : nr2;
    
    cout << nrfinal;
    
    cout << endl;
    
    for ( int i = 1; i <= nrfinal; i++ ) {
        // cout << i << " ";
        
        if ( ( nr1 % i == 0 ) && ( nr2 % i == 0 ) ) {
            // cout << i;
            if ( k < i ) {
                k = i;
            }
        }
        
    }
    
    cout << "Cel mai mare divizor comun este: " << k << endl;
     
    nrfinalmare = ( nr1 > nr2 ) ? nr1 : nr2;
    
    
    for ( int i = 1; i <= nrfinalmare; i++ ) {
        // cout << i * nrfinalmare << " ";

    if ( (i * nrfinalmare) % nrfinal == 0 ){
        cout << "Cel mai mic multiplu comun este: " << i * nrfinalmare << endl;
        break;
        }
    }
    return 0;
}
