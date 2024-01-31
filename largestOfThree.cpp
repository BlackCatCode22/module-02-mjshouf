#include <iostream>
using namespace std;

int main() {					// Program to return the highest of three user input
						// integers using nested if-else statements

	int answer;				// declare variabe to store the largest integer
	int num1; int num2; int num3;		// variables to store user input

	cout << "Enter three integers: " << '\n';
    	cin >> num1 >> num2 >> num3;

	  if (num1 >= num2)			// compare the first and second variable
 	   {
	        if (num1 >= num3)		// compare the first and third variable
	        {
	            answer = num1;		// the first variable is the highest integer
	        }						
	        else
	        {
	            answer = num3;		// the third variable is the highest integer
	        }
	    }
	    else
	    {
	        if (num2 >= num3)		// compare the second and third variable
	        {
	            answer = num2;		// the second variable is the highest integer
	        }
	        else
	        {
	            answer = num3;		// the third variable is the highest integer
	        }
	    }
						// display largest integer
	cout << "The largest integer is " << answer << endl; 	
	return 0;
}

