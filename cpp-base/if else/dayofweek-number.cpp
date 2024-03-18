#include <iostream>
using namespace std;

int main() { 

    int n;
	
    cout << "Enter number n: ";
    cin >> n;
    
    //this version of solving this type of problem is not good
    /* 
    if (n == 1) {
        cout << "1 = Monday";
    } else if (n == 2) {
        cout << "2 = Tuesday";
    } else if (n == 3) {
        cout << "3 = Wednesday";
    } else if (n == 4){
        cout << "4 = Thursday";
    } else if (n == 5){
        cout << "5 = Friday";
    } else if (n == 6){
        cout << "6 = Saturday";
    } else if (n == 7){
        cout << "7 = Sunday";    
    } else {
    	cout << "there are only 7 days in weeks, not " << n;
    }
	*/
	
    if ( n >= 1 && n <= 7) {
    	switch (n) {
    	  case 1:
    	    cout << "Monday";
    	    break;
    	  case 2:
    	    cout << "Tuesday";
    	    break;
    	  case 3:
    	    cout << "Wednesday";
    	    break;
    	  case 4:
    	    cout << "Thursday";
    	    break;
    	  case 5:
    	    cout << "Friday";
    	    break; 
    	  case 6:
    	    cout << "Saturday";
    	    break;
    	  case 7:
    	    cout << "Sunday";
    	    break;
    	}
      } else {
         cout << "There are only 7 days in a week, not " << n;
     }
  return 0;
}
