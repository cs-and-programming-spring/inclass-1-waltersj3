


/***********************************************
* Name: Adam Walters
* Email: waltersj3@students.rowan.edu
***********************************************
* Purpose:
*  This program meets all the requirements in the first assignment
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	//Declares all variables
	float radius, circumference;
	float miles, kilometers, meters, mm, cm;
	float celsius, fahrenheit;
	float years, months, days;
	double hours, minutes, seconds;


	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program takes in a distance in miles and converts it to kilometers" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input a distance in miles: ";
	cin >> miles;
	
	//Compute distance in miles to distance in kilometers
	kilometers = miles * 1.6; 
	
	//Display the distance in kilometers 
	cout << " The distance in kilometers is = " << kilometers << "\n\n";



	cout << " This next section will calculate the circumference of a circle based on a given radius." << endl;
	
	//Asks for input
	cout << " Please input the radius of the circle: ";
	cin >> radius;

	//Computes circumference based on radius
	circumference = 2 * 3.14159 * radius;

	//Outputs circumference
	cout << " The circumference of the circle is: " << circumference << "\n\n";



	cout << " This next section displays the given distance in miles from earlier in millimeters, centimeters, and meters." << endl;

	//Calculates conversion from miles to millimeters, centimeters, and meters
	meters = 1000 * kilometers;
	cm = 100 * meters;
	mm = 10 * cm;

	//Displays values in meters, centimeters, and millimeters
	cout << miles << " miles is equal to: " << endl;
	cout << meters << " meters" << endl;
	cout << cm << " centimeters" << endl;
	cout << mm << " millimeters" << "\n\n";



	cout << " This next program will convert a temperature in celsius to its equivalent in fahrenheit" << endl;

	//Asks the user for input
	cout << " Please input a temperature in celsius: ";
	cin >> celsius;

	//Converts the given temperature from celsius to fahrenheit
	fahrenheit = ((9 * celsius) / 5) + 32;

	//Displays the converted temperature
	cout << celsius << " degrees celsius is equal to " << fahrenheit << " degrees fahrenheit." << "\n\n";



	cout << " This next section will display how old a person is in months, days, hours, minutes, and seconds based on years.";

	//Asks the user for input in the form of a year
	cout << " Please input an age in years: ";
	cin >> years;

	//Calculates the user's age based on input in years.
	months = years * 12;
	days = years * 365.25;
	hours = days * 24;
	minutes = hours * 60;
	seconds = minutes * 60;

	cout << " Based on your age in years you are: " << endl;
	cout << months << " months old" << endl;
	cout << days << " days old" << endl;
	cout << hours << " hours old" << endl;
	cout << minutes << " minutes old" << endl;
	cout << seconds << " seconds old" << "\n\n";



	cout << " This final section displays the first initial of my name: 'A', as a block letter" << endl;

	//Prints the letter A as a block letter
	cout << "      **   \n";
	cout << "     *  *  \n";
	cout << "     ****  \n";
	cout << "     *  *  \n";
	cout << "     *  *  \n";
	cout << "    **  ** \n";




	cout << "Program has ended"<<endl;

	system("pause");
	
	return 0;
}