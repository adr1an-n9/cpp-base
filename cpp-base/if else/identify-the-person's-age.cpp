#include <iostream>
using namespace std;

int main() { 

    int BirthDay, BirthMonth, BirthYear, CurrentDay, CurrentMonth, CurrentYear;
    
    cout << "Enter birthday: ";
    cin >> BirthDay;
    cout << "Enter month of birth: ";
    cin >> BirthMonth;
    cout << "Enter the year of birth: ";
    cin >> BirthYear;
    cout << "Enter the current day: ";
    cin >> CurrentDay;
    cout << "Enter the current month: ";
    cin >> CurrentMonth;
    cout << "Enter the current year: ";
    cin >> CurrentYear;
    
    int ageYears = CurrentYear - BirthYear;
    int ageMonths = CurrentMonth - BirthMonth;
    int ageDays = CurrentDay - BirthDay;

    bool isCurrentDayAfterBirthDay = CurrentDay >= BirthDay;

    if (CurrentMonth < BirthMonth || (CurrentMonth == BirthMonth && !isCurrentDayAfterBirthDay)) {
        ageYears--;
    }

    cout << "The person is " << ageYears << " years old" << endl;

    if (isCurrentDayAfterBirthDay) {
        ageMonths--;
    }

    cout << "The person is " << ageMonths << " months old" << endl;

    if (CurrentMonth == BirthMonth) {
        cout << "The person is " << ageMonths + 12 << " months old" << endl;
    }

    if ( ageDays < 0 ) {
 	 cout << "The person has " << ageDays + 31 << " days completed" << endl;
    } else {
	 cout << "The person has " << ageDays << " days" << endl;
    }
    
   return 0;
}
