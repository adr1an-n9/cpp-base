#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    
    cout <<"Enter number a): ";
    cin >> a;
    cout <<"Enter number b): ";
    cin >> b;
    cout <<"Enter number c): ";
    cin >> c;
    
    if (a < b && a < c) {
        cout << "Min number is a): " << a; 
    } else if (b < a && b < c)  {
        cout << "Min number is b): " << b;
    } else if (c < a && c < b) {
        cout << "Min number is c): " << c;
    } else {
        cout << "The numbers are equal";
    }

    return 0;
}