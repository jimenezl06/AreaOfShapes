// ********************************************************
// Programmer�s name: Luis Jimenez 
// Course Number:  CIS142
// Date:  October 25 2022
// Assignment:  Lab 5
// Description:  Area of Shapes
// Files: LabFive.cpp
// ********************************************************
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{	//Declare variables float so that they hold decimals if needed
	float a;

	float b;

	float a_triangle = 0.00;
	
	float a_rectangle = 0.00;
	
	float a_square = 0.00;
	
	float a_circle = 0.00;
	//This variable will store the users input for the selection
	char usr_inp{};
	do {//Displays menu
		cout << endl;

		cout << "	A. Area of a Triangle" << endl;
		
		cout << "	B. Area of a Rectangle" << endl;
		
		cout << "	C. Area of a Square" << endl;
		
		cout << "	D. Area of a Circle" << endl;
		
		cout << "	Q. Quit" << endl;
		
		cout << endl;
		//Asks user for selection input
		cout << "	Please enter your selection:  ";
		//Stores selection in usr_inp
		cin >> usr_inp;
		cout << endl;
		usr_inp = toupper(usr_inp);
		//Switch statement 
		switch (usr_inp)
		{
		case 'A':
			//Asks user for base of a triangle
			cout << "Please enter base of a triangle:  ";
			//Stores base in 'a'
			cin >> a;
			cout << endl;
			//Asks user for height of a triangle
			cout << "Please enter height of a triangle:  ";
			//Stores height in 'b'
			cin >> b;
			cout << endl;
			//Calculation for Area of a triangle
			a_triangle = (static_cast<float>(a * b)) / 2;
			//Displays Area of Triangle
			cout << "Area of a Triangle is " << a_triangle;
			cout << endl;

			break;

		case 'B':
			//Asks user for length
			cout << "Please enter length of a rectangle:  ";
			//Stores length in 'a'
			cin >> a;
			cout << endl;
			//Asks user for width
			cout << "Please enter width of a rectangle:  ";
			//Stores width in 'b'
			cin >> b;
			cout << endl;
			//Calculation for Area of rectangle
			a_rectangle = (static_cast<float>(a * b));
			//Displays Area of rectangle
			cout << "Area of a Rectangle is  " << a_rectangle;
			cout << endl;

			break;

		case 'C':
			//Asks user for side of square
			cout << "Please enter side of a square:  ";
			//Stores side of square in float 'a'
			cin >> a;
			cout << endl;
			//Calculation for Area of a square 
			a_square = (static_cast<float>(a * a));
			//Displays Area of Square
			cout << "Area of a Square is  " << a_square;
			cout << endl;

			break;

		case 'D':
			//Asks user for input
			cout << "Please enter radius of a Circle:  ";
			//Stores input(radius) in float 'a' 
			cin >> a;
			cout << endl;
			//Calculation for Area of a circle
			a_circle = 3.1415926535897 * a * a;
			//Displays radius
			cout << "Area of a Circle is  " << fixed << setprecision(2) << a_circle;
			cout << endl;

			break;

		default:
			//Will only display if user inputs something that isn't A,B,C,D, or Q
			cout << "You have a wrong selection. Please try again." << endl;

			cout << "Choices must be 'A','B','C','D', or 'Q'";
			cout << endl;

			break;

		case 'Q':
			//Case Q and displays thank you message
			cout << "Thank you for using the program";
			cout << endl;
		}

	} while (usr_inp != 'Q');
	//Message displays if user quits program
	cout << "Goodbye! Have a good day.";
	//Program ends
	return 0;
	}
