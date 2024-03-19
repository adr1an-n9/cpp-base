#include <iostream>
using namespace std;

int main()
{
    int i, number1, number2;
    
    cout << "Number 1 = ";
    cin >> number1;
    
    cout << "Number 2 = ";
    cin >> number2;
    
    for ( i = number1; i >= 1; i-- ) {
      if (number1 % i == 0 && number2 % i == 0) {
         cout << i << " "; 
         break; 
      } 
    }
    
//    cout << endl;
//    
//    for ( i = number2; i >= 1; i++ ) {
//      if (number2 % i == 0 && number1 % i == 0) {
//         cout << i << " "; 
//         break; 
//      } 
//    }
    
    return 0;
}




/*
n1 = 4  
n2 = 30 
cel mai mare divizor comun - cifra cea mai mare care se imparte si n1 si n2 [ 2 ]
cel mai mic multiplu comun - cifra cea mai mica care este imparte si cu n1 si cu n2 [ 60 ]


n1 = nr>nr1 / 2
n1 = 4 = 1 2 3 4 
n2 = 30 = 1...30 
rez = n2/n1 = ? 

*/
