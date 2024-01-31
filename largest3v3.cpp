#include <iostream>
using namespace std;

int main () {						// largest of three user-input integers using logical operators
	int answer;					// variable to store largest integer
	int num1, num2, num3;				// variable to capture three integers from user

	cout << "Enter three integers: ";
    	cin >> num1 >> num2 >> num3;
	
	if(num1 >= num2 && num1 >= num3) {		// check if num1 is greater or equal to num2 AND if num1
		answer = num1;				// is greater than or equal to num3. if true num1 is largest
	} else if(num2 >= num1 && num2 >= num3) {	// if false then check if num2 is >= num2 AND num3
		answer = num2;				// if true then num2 is largest integer
	} else {
		answer = num3;				// if false then num3 is the largest integer
	}
cout << "The largest number is " << answer << '\n';
	return 0;
}
