// This program creates and saves a statistics report 
// for the test scores of an unspecified amount of students.
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

// Function prototypes
double total(int, int, double []);
double average(int, int, double []);
double standardDeviation(int, int, double [], double, double);
//void statistics();
void saveToFile(int, double, double);



// CHERI- Obtain test scores.
int main()
{
// Setting up array to store test scores.
	int students;
	
	cout << "Enter the number of students: ";
	cin >> students;
	
// Creating array.
	double scores[students];
	
// Other variables.
	int count;
	double sum;
	double avg;
	double stdv;
	
	// Getting test scores.
	for (count = 0; count < students; count++)
	{
		cout << "Enter the score earned by student "
				<< (count + 1) << ": ";
		cin >> scores[count];
	}
	
	// Displaying the scores.
	cout << "The scores you entered are: " << endl;
	for (count = 0; count < students; count++)
	{
		cout << "Student " << (count + 1) << ": ";
		cout << scores[count] << endl;
	}
	cout << endl;

  // Running other functions.
	sum = total(count, students, scores);
	
  avg = average(count, students, scores);

  stdv = standardDeviation(count, students, scores, sum, avg);

  //statistics();

  saveToFile(students, avg, stdv);

  // Done.
  return 0;
}



// AHMED- Get the average of the test scores.
double total (int count, int students, double scores[])
{
	double sum = 0 ;   //intialize the accumulator to 0

for (count = 0; count < students; count++)
	sum += scores[count];


cout <<"The sum of the scores are: "<<sum<<endl;
	
return sum;
}

// Needs a TUPLE
double average(int count, int students, double scores[])
{
double sum = 0 ;   //intialize the accumulator to 0

for (count = 0; count < students; count++)
	sum += scores[count];

cout <<"The average of the scores are: "<<sum/students<<endl;
	
return sum/students;
}



// SUI- Display the standard deviation of the test scores.
double standardDeviation(int count, int students, double scores[], double sum, double avg)
{

	sum+=(scores[count]-avg)*(scores[count]-avg);
cout << "The standard deviation is:" << sqrt(sum/students) << endl; 
	return sqrt(sum/students);
}

//ATTIAH- Display the statistics of the scores.
//void statistics()
//{
// INCOMPLETE
//}


// JOSHUA- Save data to a file.
void saveToFile(int students, double avg, double stdv)
{
    ofstream outputFile;


// Saves data to a file.
outputFile.open("Average.txt");
outputFile << "CLASS GRADE REPORT" << endl;
 
outputFile << "Number of students entered: " <<students << endl;


 outputFile << "Average:" << avg << endl;
 outputFile << "Standard deviation: " << stdv << endl;
    //outputFile << endl;

outputFile.close();
}


