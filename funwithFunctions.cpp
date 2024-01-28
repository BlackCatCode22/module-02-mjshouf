 #include <iostream> // for std::cout and std::cin

int getAnIntFromTheUser(){		// prompts the user to enter an integer and then returns this integer
 
	std::cout << "Enter an integer: ";
	int input{};				// define variable 'input' to hold user input (and value-initialize it)
	std::cin >> input;			// get number from keyboard and store it in variable 'input'

	return input; 				// return the value the user entered back to the caller
}

int compareTwoInts(int x, int y) {	//takes two integers as parameters and returns the larger of the two

	std::cout << x << '\n';		// display the first integer
    std::cout << y << '\n';		// display the second integer

 	int result;					// declare variable to hold the result of the code
 
   	if (x > y)					// find which integer has the higher value
      		result = x;
  	else
      		result = y;
 
 	return result; 				// store the info in this variable and return to caller
} 

int sumTwoInts(int s, int t){	// take two integers as parameters and returns their sum
	std::cout << s << '\n';		// display the first integer
	std::cout << t << '\n';		// display the second integer

	int add;					// declare variable to hold result of function
		add = s + t;			// add the two integers for the sum

	return add;					/// store the info in this variable and return to caller
}

int main()	{
	 int num { getAnIntFromTheUser() }; // initialize num with the return value of getAnIntFromTheUser()
		std::cout << "You entered: " << num  << '\n';
	 int res { compareTwoInts(3,4)} ;	// initialize res with the return value of compareTwoInts()
										// the values of x and y are stored in the code
 		std::cout << "The high integer is " << res << '\n';
	int add { sumTwoInts(5,9)};			// initialize add with return value sumTwoInnts() with two integers encoded
		std::cout << "The sum of these numbers is " << add << '\n';

		return 0;
}
