#include <iostream>
using namespace std;

int main()
{
    int a, b;
    
    cout <<"Enter number a): ";
    cin >> a;
    cout <<"Enter number b): ";
    cin >> b;
    
    if (a > b) {
        cout << "Max number is a): " << a; 
    } else if (b > a) {
        cout << "Max number is b): " << b;
    } else {
        cout << "The numbers are equal";
    }

    return 0;
}
