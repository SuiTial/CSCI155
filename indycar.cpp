// This program claculates the number of laps
#include <iostream>
using namespace std;

int main() {
// setting up variables
double miles, minutes, laps;

// Get the number of miles.
cout << "How many miles did you ride? ";
cin >> miles;

// Get the number of minutes.
cout << "How many minutes did you ride? ";
cin >> minutes;

// Calculate the laps.
laps = miles / minutes;
  
// Display the laps.
cout << "the number of laps " << laps << endl;
return 0;
}
