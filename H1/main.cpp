#include <iostream>
#include <stdexcept>
#include <iomanip>

using namespace std;

void calcSum(int a, int b)
{
	int sum = a + b;
	cout << "The sum of " << a << " and " << b << " is: " << sum << std::endl;
}

void calcDiv(int a, int b)
{
	if (b != 0)
	{
		float div = static_cast<float>(a) / b;
		cout << "The division of " << a << " by " << b << " is: " << div << std::endl;
	} 
	else 
	{
		cout << "Division by zero is not allowed." << std::endl;
	}
}

int retSum(int a, int b)
{
	return a + b;
}

float retDiv(int a, int b)
{
	if (b != 0)
	{
		return static_cast<float>(a) / b;
	}
	else 
	{
		throw std::runtime_error("Division by zero is not allowed.");
	}
}

int main()
{

	int a, b;
	
	cout << fixed << setprecision(2); // Set fixed-point notation with 2 decimal places

	cout << "Input two numbers" << std::endl;
	cin >> a >> b;
	
	calcSum(a, b);
	calcDiv(a, b);

	int sum = retSum(a, b);
	cout << "The returned sum is: " << sum << std::endl;

	try
	{
		float result = retDiv(a, b);
		cout << "The returned division result is: " << result << std::endl;
	} 
	catch (const std::runtime_error& e) 
	{
		cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
