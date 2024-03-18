#include <iostream>
using namespace std;

int main () {

    char lett1, lett2, lett3, lett4;
    
    cout << "Enter first letter: ";
    cin >> lett1;  
    cout << "Enter second letter: ";
    cin >> lett2;  
    cout << "Enter third letter: ";
    cin >> lett3;  
    cout << "Enter fourth letter: ";
    cin >> lett4;
    
    if ( lett1 + 1 == lett2 && lett2 + 1 == lett3 && lett3 + 1 == lett4) {
        cout << "Letters: " << lett1 << "," << lett2 << "," << lett3 << " and " << lett4 << " are consecutive";
    } else {
        cout << "Letters are not consecutive";
    }
    
    return 0;
}