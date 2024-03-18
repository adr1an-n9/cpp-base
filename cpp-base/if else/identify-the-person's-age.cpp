#include <iostream>
using namespace std;

int main() { 

    int Bd, Md, Yd, Cd, Cm, Cy;
    
    cout << "Enter birthday: ";
    cin >> Bd;
    cout << "Enter month of birth: ";
    cin >> Md;
    cout << "Enter the year of birth: ";
    cin >> Yd;
    cout << "Enter the current day: ";
    cin >> Cd;
    cout << "Enter the current month: ";
    cin >> Cm;
    cout << "Enter the current year: ";
    cin >> Cy;
    
    int ageYears = Cy - Yd;
    int ageMonths = Cm - Md;
    int ageDays = Cd - Bd;
    
    if ( Cm - Md ) { 
	cout << "The person is " << ageYears - 1 << " years old" << endl;
    } else { 	
	cout << "The person is " << ageYears << " years old" << endl;	
    }
    cout << "The person is " << ageMonths + 12 << " months old" << endl;
    cout << "The person has " << ageDays << " days" << endl;

    return 0;
}
