// tutorialspoint_cpp.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip> // for setprecision


// extern example Variable declaration:
extern int ext_a, ext_b;
extern int ext_c;
extern float ext_decimal_f;


int global_int = 0;
int scoped_int =20;


#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'


class CTurorialsTest
{
public:
	CTurorialsTest() {};
	~CTurorialsTest() {};

	int mRun_TutorialsPoint();
	int mRun_CiscoTests();

private:
	int runned;
};


int CTurorialsTest::mRun_TutorialsPoint()
{

	// TODO
	// Use a switch body to separate all the code below
	


	// START Code section from tutorialspoint document 

	// example for typedef and init types
	typedef int feet;
	feet distance = 10;
	int distance_as_feet = distance;


	// example for enums
	enum color { red, green, blue } mycolor;
	mycolor = green;

	// Starting again, refreshing old stuff
	std::cout << " starting again\n";
	std::cout << " Section 1 " << std::endl;
	std::cout << " Hello World!\n";
	std::cout << " Sizes of common types \n";
	std::cout << " Size of char : " << sizeof(char) << std::endl;
	std::cout << " Size of int : " << sizeof(int) << std::endl;
	std::cout << " Size of short int : " << sizeof(short int) << std::endl;
	std::cout << " Size of long int : " << sizeof(long int) << std::endl;
	std::cout << " Size of float : " << sizeof(float) << std::endl;
	std::cout << " Size of double : " << sizeof(double) << std::endl;
	std::cout << " Size of wchar_t : " << sizeof(wchar_t) << std::endl;


	// typedef example 
	std::cout << " Section 2 " << std::endl;
	std::cout << " value of feet " << distance << "\n";
	// enum example
	std::cout << " Value of enum " << mycolor << "\n";

	//example based for local scope variables
	int int_a = 2, int_b = 3, int_c = 4;
	float decimal_f = 3.0 / 2.0;

	std::cout << " Section 3 " << std::endl;
	std::cout << " Value from values defined " << (int_a + int_b + int_c) << "\n";
	std::cout << " Value from decimal defined " << decimal_f << "\n";

	int local_scope_int = 10;
	int scoped_int = 5;
	std::cout << " Section 4 " << std::endl;
	std::cout << " Local scope variable " << local_scope_int << "\n";
	std::cout << " global scope variable " << global_int << "\n";
	std::cout << " scoped int " << scoped_int << "\n";

	int area;
	area = LENGTH * WIDTH;
	std::cout << " Section 5 " << std::endl;
	std::cout << " using a define value = " << area << "\n";
	std::cout << " using a define for a new line" << NEWLINE << "continued \n\n";


	const int LENGTH_const = 10;
	const int WIDTH_const = 5;
	const char NEWLINE_const = '\n';
	int area_again;
	area_again = LENGTH_const * WIDTH;

	std::cout << area_again;
	std::cout << NEWLINE_const;

	std::cout << " Section 6 " << std::endl;


	// END Code section from tutorialspoint document 

	return 0;
};



int CTurorialsTest::mRun_CiscoTests()
{
	// TODO
	// Use a switch body to separate all the code below
	// 
	// // START Code section from NETACAD

	float v = 2;
	float result = (v + 1) * 2;
	std::cout << "result:  " << result << "  expected result :  6" << std::endl;
	result = (v + 1) * (v + 2) * 2;
	std::cout << "result: " << result << "  expected result : 24" << std::endl;
	result = (v - 1) * 2 + 2 * 2;
	std::cout << "result:  " << result << "  expected result :  6" << std::endl;
	result = ((v + v) * (v + v)) * 2;
	std::cout << "result: " << result << "  expected result : 32" << std::endl;
	result = (int)v % 2 * (v + 2 * 2);
	std::cout << "result:  " << result << "  expected result :  0" << std::endl;

	float pi = 3.14159265359;
	float x, y;

	std::cout << "Enter value for x: ";
	std::cin >> x;

	// x2 : squared x (to simplify final expression)
	float x2 = x * x;

	// pi2 : squared pi (as above)
	float pi2 = pi * pi;

	// note: we use 0.5 instead of 1./2. - don't use 1/2 because it's equal to 0!
	y = (x2 / (pi2 * (x2 + 0.5))) * (1 + (x2 / (pi2 * (x2 - 0.5) * (x2 - 0.5))));

	std::cout << "y = " << y << std::endl;

	int i, j, k;

	std::cout << "Enter i: ";
	std::cin >> i;
	std::cout << "Enter j: ";
	std::cin >> j;

	// increment i by 2
	i += 2;

	// decrement j by i
	j -= i;

	// divide i by j giving k
	k = i / j;

	// increment k by k
	k += k;

	// decrement k by 1
	k--;

	// assign k modulo i to j
	j = k % i;

	// increment k by k added to i
	k += (k + i);

	// increment k by k divided by j
	// may cayse an exception cause of not checking 0 / 0 operation
	k += (k / j);

	// assing k times k times k to k
	k = k * k * k;

	// increment k by i times j
	k += (i * j);

	std::cout << k << std::endl;

	bool answer;
	int value;

	std::cout << "Enter a value: ";
	std::cin >> value;

	answer = (value >= 0 && value < 10) || (2 * value < 20 && value - 2 > -2) || (value - 1 >= 1 && value / 2 < 10) || value == 111;

	// is greater than or equal to zero and less than ten

	// or
	// its value multiplied by 2 is less than twenty and 
	// its value reduced by two is greater than minus two

	// or

	// its value reduced by one is greater than one and 
	// its value divided by 2 is less than ten

	// or

	// it is equal to 111


	std::cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << std::endl;



	int inputDivisor1, inputDivisor2;

	std::cout << "Input first divisor:";
	std::cin >> inputDivisor1;
	//the student doesn't need to worry about the division by zero at this moment
	if (inputDivisor1 == 0)
		return -1;
	//the student could use function-style cast or even C-style cast in the line below
	float result1 = 1 / static_cast<float>(inputDivisor1);

	std::cout << "Input second divisor:";
	std::cin >> inputDivisor2;
	if (inputDivisor2 == 0)
		return -1;
	//the student could use function-style cast or even C-style cast in the line below
	float result2 = 1 / static_cast<float>(inputDivisor2);
	float diff = result1 - result2;
	float diffabs = diff < 0 ? -diff : diff;
	const float epsilon_diff = 0.00001;
	if (diffabs <= epsilon_diff)
		std::cout << std::endl << "Results are equal (by 0.000001 epsilon)" << std::endl;
	else
		std::cout << std::endl << "Results are not equal (by 0.000001 epsilon)" << std::endl;



	int ipPart1, ipPart2, ipPart3, ipPart4;
	std::string ipNumber;

	bool allOk = false;

	while (!allOk)
	{
		std::cout << "Input 1st part of IP address:";
		std::cin >> ipPart1;
		std::cout << "Input 2nd part of IP address:";
		std::cin >> ipPart2;
		std::cout << "Input 3rd part of IP address:";
		std::cin >> ipPart3;
		std::cout << "Input 4th part of IP address:";
		std::cin >> ipPart4;

		if (ipPart1 <= 256 || ipPart2 <= 256 || ipPart3 <= 256 || ipPart4 <= 256)
			allOk = true;

	}

	//student could use stringstream here to store it in a variable
	std::cout << ipPart1 << "." << ipPart2 << "." << ipPart3 << "." << ipPart4 << std::endl;


	// leap year
	int year;

	std::cout << "Enter a year: ";
	std::cin >> year;

	if (year < 1582)
	{
		std::cout << "Warning: Year falls outside the Gregorian era." << std::endl;
	}
	else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		std::cout << "Leap year" << std::endl;
	}
	else
	{
		std::cout << "Common year" << std::endl;
	}



	// tax calculation
	float grossprice, taxrate, netprice, taxvalue;

	std::cout << "Enter a gross price: ";
	std::cin >> grossprice;
	std::cout << "Enter a tax rate: ";
	std::cin >> taxrate;

	if (grossprice <= 0.0 || taxrate < 0.0 || taxrate > 100.0)
	{
		std::cout << "Input data doesn't look correct - I refuse calculations." << std::endl;
	}
	else
	{
		netprice = grossprice / (1.0 + taxrate / 100.0);
		taxvalue = grossprice - netprice;

		std::cout << std::fixed << std::setprecision(4); // Set precision to 4 decimal places
		std::cout << "Net price: " << netprice << std::endl;
		std::cout << "Tax value: " << taxvalue << std::endl;
	}


	// system conversion metric to imperial 
	int   sys; 		// measurement system
	float m, ft, in;	// metres, feet and inches
	int   ift;		// feet but as integer

	std::cout << "What is your measurement system? 0-metric/1-imperial: ";
	std::cin >> sys;

	// metric?
	if (sys == 0)
	{
		std::cout << "m = ";
		std::cin >> m;

		// inches first
		in = m / 0.0254;
		// we need integral number of feet
		ift = in / 12;
		// remainder is a real number of inches
		in = in - (ift * 12);
		std::cout << ift << "'" << in << "\"" << std::endl;

		// imperial?
	}
	else if (sys == 1)
	{
		std::cout << "ft = ";
		std::cin >> ft;
		std::cout << "in = ";
		std::cin >> in;

		// cumulate inches and feet as inches
		in += 12 * ft;

		// convert inches into meters
		m = in * 0.0254;

		std::cout << m << "m" << std::endl;
	}


	// day of the week
	int fullyear, months, days;	// year, month, day

	std::cout << "year = ";
	std::cin >> fullyear;
	std::cout << "month = ";
	std::cin >> months;
	std::cout << "day = ";
	std::cin >> days;

	// decrease month number by 2	
	months -= 2;

	// if month number became less than zero...
	if (months <= 0)
	{
		// increment it by 12 and decrement year by 1
		months += 12;
		fullyear--;
	}

	// take month number, multiply it by 83 and divide by 32
	months = months * 83 / 32;

	// add day number to month
	months += days;

	// add year number to month
	months += fullyear;

	// add year/4 to month
	months += fullyear / 4;

	// subtract year/100 from month
	months -= fullyear / 100;

	// add year/400 to month
	months += fullyear / 400;

	// find a remainder of dividing month by 7
	std::cout << months % 7 << std::endl;


	// find easter 
	int yr = 1, mn = 1, da = 1;

	std::cout << "year = ";
	std::cin >> fullyear;

	// divide year by 19 and find the reminder - assign it to a
	int a = fullyear % 19;

	// divide year by 4 and find the reminder - assign it to b
	int b = fullyear % 4;

	// divide year by 7 and find the reminder - assign it to c
	int c = fullyear % 7;

	// take a, multiply it by 19, add 24, divide by 30 and find the reminder - assign it to d
	int d = (a * 19 + 24) % 30;

	// divide  (2b + 4c + 6d + 5) by 7 and find the reminder - assign it to e
	int e = (2 * b + 4 * c + 6 * d + 5) % 7;

	// check the value of d + e; if it is less than 10...
	if (d + e < 10)
		// the Easter falls on (d + e + 22)th day of March
		std::cout << "March " << d + e + 22 << std::endl;
	else
		// otherwise it falls on (d + e – 9)th day of April
		std::cout << "April " << d + e - 9 << std::endl;



	// find two largest number

	  /* the two numbers */
	int number1, number2, number3;

	/* we will save the larger number here */
	int max;

	/* read two numbers */
	std::cin >> number1;
	std::cin >> number2;

	/* we temporarily assume that the former number is the larger one */
	/* we will check it soon */
	max = number1;

	/* we check if the assumption was false */
	if (number2 > max)
		max = number2;

	/* we print the result */
	std::cout << "The larger number is " << max << std::endl;

	/* we finish the program successfully */


	// largest of three
	  /* the three numbers */
	// int number1, number2, number3;

	/* we will save the larger number here */
	//int max = 1;

	/* read three numbers */
	std::cin >> number1;
	std::cin >> number2;
	std::cin >> number3;

	/* we temporarily assume that the former number is the larger one */
	/* we will check it soon */
	max = number1;

	/* we check if the second value is the largest */
	if (number2 > max)
		max = number2;

	/* we check if the third value is the largest */
	if (number3 > max)
		max = number3;

	/* we print the result */
	std::cout << "The largest number is " << max << std::endl;

	
	//LAB Collatz's hypothesis
	int c0, iteration = 0;

	std::cout << "c0 = ";
	std::cin >> c0;
	while (c0 != 1) {

		// increment steps counter
		iteration++;

		if (c0 % 2 == 0)
			// if it's even, evaluate a new c0 as c0
			c0 = c0 / 2;
		else
			// otherwise, if it's odd, evaluate a new c0 as 3 ⋅ c0 + 1
			c0 = 3 * c0 + 1;
		std::cout << c0 << std::endl;
	}
	std::cout << "steps = " << iteration << std::endl;


	//LAB   Some actual evaluations – finding the value of π
	double pi4 = 0.;

	// counter
	long   n;

	// divider
	double div = 1;

	std::cout << "Number of iterations? ";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 1)
			// odd steps - subtract 1/divider
			pi4 -= (1. / div);
		else
			// even steps - add 1/divider
			pi4 += (1. / div);

		// update divider
		div += 2.;
	}
	std::cout.precision(20);
	std::cout << "Pi = " << (pi4 * 4.) << std::endl;




	// Positive power of 2 
	int number;

	// 2 to the power of 0 is 1
	unsigned long pow = 1;

	std::cout << "n? ";
	std::cin >> number;

	// repeat it n times
	for (int i = 0; i < number; i++)

		// evaluate next power of 2
		pow *= 2;

	std::cout << pow << std::endl;



	// make squares
	int side;

	std::cout << "Side size = ";
	std::cin >> side;

	// top side
	std::cout << '+';
	for (int i = 0; i < side - 2; i++)
		std::cout << '-';
	std::cout << '+' << std::endl;


	for (int i = 0; i < side - 2; i++) 
	{
		// left side
		std::cout << '|';

		// interior
		for (int j = 0; j < side - 2; j++)
			std::cout << ' ';

		// right side
		std::cout << '|' << std::endl;
	}

	// bottom side
	std::cout << '+';
	for (int i = 0; i < side - 2; i++)
		std::cout << '-';
	std::cout << '+' << std::endl;




	// make pyramids

	int fixed_limit = 3, height;
	std::cout << "Pyramid height = ";
	std::cin >> height;
	int empty_space = 15;		// starting empty space width
	int begin_space = 1;		// additional empty space width
	int inside_space = 1;		// inside space width
	// tops of pyramids
	for (int i = 0; i < fixed_limit; i++) 
	{
		for (int j = 0; j < empty_space; j++)
			std::cout << ' ';
		std::cout << '*';
	}
	std::cout << std::endl;
	empty_space -= 2;
	// side walls of pyramids
	for (int k = 1; k < height - 1; k++) 
	{
		for (int i = 0; i < begin_space; i++)
			std::cout << ' ';
		for (int i = 0; i < fixed_limit; i++) 
		{
			for (int j = 0; j < empty_space; j++)
				std::cout << ' ';
			std::cout << '*';
			for (int l = 0; l < inside_space; l++)
				std::cout << ' ';
			std::cout << '*';
		}
		inside_space += 2;
		empty_space -= 2;
		begin_space += 1;
		std::cout << std::endl;
	}
	// bases of pyramids
	for (int i = 0; i < begin_space; i++)
		std::cout << ' ';
	for (int i = 0; i < fixed_limit; i++) 
	{
		for (int j = 0; j < empty_space; j++)
			std::cout << ' ';
		for (int l = 0; l < inside_space + 2; l++)
			std::cout << '*';
	}
	std::cout << std::endl;



	// the fucking fibb stuff

	int iterations_number;

	std::cout << "n = ";
	std::cin >> iterations_number;

	// two first elements are equal to zero
	if (iterations_number == 1 || iterations_number == 2)
		std::cout << 1 << std::endl;
	else 
	{
		// initially: a is first and b is second element
		long a = 1, b = 1, c;
		for (int i = 2; i < iterations_number; i++) {

			// c - new next element = sum of two previous elements
			c = a + b;

			// a becomes new 'preprevious' element (old a is lost)
			a = b;

			// b becomes new previous element
			b = c;
		}
		std::cout << c << std::endl;
	}



	// factorials


	int factorial_number;

	std::cout << "n = ";
	std::cin >> factorial_number;

	// Handle base cases (0! and 1!)
	if (factorial_number == 0 || factorial_number == 1) 
	{
		std::cout << "1" << std::endl;
	}
	else 
	{
		// Initialize result to 1
		long long result = 1;

		// Multiply all numbers from 2 to n
		for (int i = 2; i <= factorial_number; i++) 
		{
			result *= i;
		}

		std::cout << result << std::endl;
	}





// The key to solve the problem is finding a rule (the simplest one!)
// binding number in the bottom-right corner (x) with square side (n). 
// Note that the number in the top-left corner is always equal to n*n.
// To move down from top-left to bottom-left corner we will need to skip
// n-1 cells; next, to move right to bottom-right corner we have to skip n-1
// cells again. It means, that number in the bottom-right corner is equal to:
// x = n * n - 2 * (n - 1)
// or 
// x = n * n - 2 * n + 2
// No other evaluations are needed!

	unsigned long riddle_number;

	std::cout << "n = ";
	std::cin >> riddle_number;
	std::cout << (riddle_number * riddle_number - 2 * riddle_number + 2) << std::endl;
	





	// bitwise check


	// value being tested
	unsigned long val;
	// bits counter - initially zero
	int cnt = 0;

	std::cout << "value = ";
	std::cin >> val;

	// as long as there is at least '1' inside 'val'...
	while (val != 0) 
	{

		// if the lowest bit of val is equal to 1...
		if ((val & 1) == 1)
			// increment counter
			cnt++;
		// shift val to right to check another bit 
		// note: already checked bit is lost
		val >>= 1;
	}
	std::cout << cnt << std::endl;




	// bitwise palindrome

		// value to be tested
	unsigned short int value_bit = 0;

	bool ispalindrome = false;

	std::cout << "value = ";
	std::cin >> value_bit;

	// we will store mirrored value of val here
	unsigned short int newval = 0;

	for (int i = 0; i < 16; i++) 
	{
		// get the bit at i-th position 
		// (counting from 0 and beginning at lowest bit position)
		// note: we use & to extract the bit
		int bit = value_bit & (1 << i);

		// if the bit is set to '1'...
		if (bit)
			// ... put '1' at (15-i)-th position of newval
			// note: we use | to introduce the bit
			newval |= (1 << (15 - i));
	}

	// val is a palindrome if it is equal to newval
	ispalindrome = newval == value_bit;

	if (ispalindrome)
		std::cout << value_bit << " is a bitwise palindrome" << std::endl;
	else
		std::cout << value_bit << " is not a bitwise palindrome" << std::endl;


	return 0;
};






int main()
{
	CTurorialsTest cTests;
	int choice = 0;

	std::cout << "- Run Tutorials point sample code (1)\n- Run CISCO net academy code sample code (2)\n";
	std::cout << "Type a choice : ";
	std::cin >> choice;

	if (!isalpha(choice))
	{
		std::cout << "\nNot a number, try again\n";
	}
	else
	{
		switch (choice)
		{
		case 1:
			std::cout << "RUnning Tutorials point samples\n";
			//cTests.mRun_TutorialsPoint();
			break;
		case 2:
			std::cout << "Running CISCO samples\n";
			//cTests.mRun_CiscoTests();
			break;

		default:
			std::cout << "Not a valid choice\n";
			break;
		}
	}
		

    return 0;
}


