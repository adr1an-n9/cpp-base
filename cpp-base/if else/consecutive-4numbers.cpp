#include <iostream>
using namespace std;

int main() { 

    int m,n,p,q;
	
    cout << "Enter number m: ";
    cin >> m;
    cout << "Enter number n: ";
    cin >> n;
    cout << "Enter number p: ";
    cin >> p;
    cout << "Enter number q: ";
    cin >> q;
    
    if ( m + 1 == n && n + 1 == p && p + 1 == q) {
        cout << "Numbers: " << m << "," << n << "," << p << " and " << q << " are consecutive" << endl;
    } else {
        cout << "Numbers: " << m << "," << n << "," << q  << " and " << q << " are not consecutive" << endl;
    }

  return 0;
}
