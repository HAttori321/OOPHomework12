#include <iostream>
#include <vector>
#include <string>

using namespace std;
//Task1

//double numSQRT(double x)
//{
// if (x < 0.0)
// {
// throw "Cann`t get sqrt of number less than 0.0";
// }
// return sqrt(x);
//}

//Task2

//class NegativeNumberException
//{
//public:
// const char* what() const
// {
// return "Enter positive number!";
// }
//};
//
//void Checking(int num)
//{
// if (num < 0)
// {
// throw NegativeNumberException();
// }
//}

//Task3

//class OutOfRangeException : public exception
//{
//public:
// const char* what() const override
// {
// return "Index is out of range.";
// }
//};

//Task4

//void nestedExceptions()
//{
//	vector<int> array = { 1, 2, 3 };
//	try
//	{
//		try 
//		{
//			int divisor = 0;
//			if (divisor == 0) {
//				throw "Division by zero!";
//			}
//			int result = 10 / divisor;
//		}
//		catch (const char* e)
//		{
//			cerr << "Exception: " << e << endl;
//			try
//			{
//				int index = 5;
//				if (index >= array.size()) 
//				{
//					throw "Index out of bounds!";
//				}
//				int value = array.at(index);
//			}
//			catch (const char* e)
//			{
//				cerr << "Exception: " << e << endl;
//			}
//		}
//	}
//	catch (...)
//	{
//		cerr << "Unknown exception." << endl;
//	}
//}

//Task6

//class Example 
//{
//public:
//	Example(int value) 
//	{
//		if (value <= 0)
//		{
//			throw "Invalid value! Value must be greater than zero.";
//		}
//		this->value = value;
//	}
//	void display() const 
//	{
//		cout << "Value: " << value << endl;
//	}
//
//private:
//	int value;
//};

//Task7

//void functionThatRethrows() 
//{
//	try 
//	{
//		throw "An error occurred in functionThatRethrows!";
//	}
//	catch (const char* e)
//	{
//		cout << "Caught an exception in functionThatRethrows: " << e << endl;
//		throw;
//	}
//}

//Task8

//void functionWithExceptionSpec() throw(const char*, int)
//{
//	int choice;
//	cout << "Enter 1 to throw a const char* exception, 2 to throw an int exception : ";
//	cin >> choice;
//
//	if (choice == 1)
//	{
//		throw "Exception of type const char*";
//	}
//	else if (choice == 2) 
//	{
//		throw 123;
//	}
//	else 
//	{
//		cout << "Invalid choice.No exception thrown." << endl;
//	}
//}

//Task9

//class CustomException 
//{
//public:
//	CustomException(int errorCode, const string& errorMessage) : code(errorCode), message(errorMessage) {}
//	int getErrorCode() const
//	{
//		return code;
//	}
//	const string& getErrorMessage() const 
//	{
//		return message;
//	}
//private:
//	int code;
//	string message;
//};
//void functionThatThrows()
//{
//	throw CustomException(1001, "Something went wrong.");
//}

int main()
{
	//Task1

	/*int a, b;
	cout << "Enter a and b with help of'Enter' : " << endl;
	try
	{
	cin >> a >> b;
	if (b == 0)
	{
	throw 632;
	}
	cout << "Result : " << a << " / " << b << " = " << a / b << endl;
	}
	catch (int a)
	{
	cout << "Error dividing with code " << a << endl;
	}*/

	//Task2

	//try
	//{
	// Checking(-1);
	//}
	//catch (const NegativeNumberException& e)
	//{
	// cout << "Error: " << e.what() << endl;
	//}

	//Task3

	/*int arr[5] = { 1, 2, 3, 4, 5 };
	int index;
	cout << "Enter the index of the element you want to access: ";
	cin >> index;
	try
	{
	if (index < 0 || index >= 5)
	{
	throw OutOfRangeException();
	}
	cout << "Element at index " << index << " is: " << arr[index] << endl;
	}
	catch (const OutOfRangeException& e)
	{
	cerr << "Error : " << e.what() << endl;
	}*/

	//Task4

	/*nestedExceptions();*/

	//Task6

	/*try 
	{
		Example ex(-1);
		ex.display();
	}
	catch (const char* e) 
	{
		cerr << "Exception caught: " << e << endl;
	}
	catch (...)
	{
		cerr << "An unknown exception occurred." << endl;
	}

	try 
	{
		Example ex(10);
		ex.display();
	}
	catch (const char* e) 
	{
		cerr << "Exception caught: " << e << endl;
	}
	catch (...) 
	{
		cerr << "An unknown exception occurred." << endl;
	}*/

	//task7

	/*try
	{
		functionThatRethrows();
	}
	catch (const char* e)
	{
		cerr << "Exception caught in main: " << e << endl;
	}
	catch (...) 
	{
		cerr << "An unknown exception occurred in main." << endl;
	}*/

	//Task8

	/*try
	{
		functionWithExceptionSpec();
	}
	catch (const char* e) 
	{
		cerr << "Caught exception of type const char*: " << e << endl;
	}
	catch (int e) 
	{
		cerr << "Caught exception of type int: " << e << endl;
	}
	catch (...) 
	{
		cerr << "An unknown exception occurred." << endl;
	}*/

	//Task9
	
	/*try
	{
	functionThatThrows();
	}
	catch (const CustomException& e)
	{
	cerr << "CustomException caught with error code " << e.getErrorCode() << ": " << e.getErrorMessage() << endl;
	}
	catch (...) 
	{
	cerr << "An unknown exception occurred." << endl;
	}*/
}