#include <iostream>
using namespace std;

int main() { 

    int m,n,p;
	
    cout << "Enter number m: ";
    cin >> m;
    cout << "Enter number n: ";
    cin >> n;
    cout << "Enter number p: ";
    cin >> p;
    
    if ( m + 1 == n && n + 1 == p ) {
        cout << "Numbers: " << m << "," << n << " and " << p << " are consecutive" << endl;
    } else {
        cout << "Numbers: " << m << "," << n << " and " << p << " are not consecutive" << endl;
    }

  return 0;
}
