#include<iostream>

using namespace std;

int main(){

	// Declare 3 variables
	int input1, input2, input3;

	// User input and initialization
	cout << "\nEnter Integer 1:";
	cin >> input1;
	cout << "\nEnter Integer 2:";
	cin >> input2;
	cout << "\nEnter Integer 3:";
	cin >> input3;

	// Create integer pointers to dynamic memory for each value
	int* ptr1 = new int(input1);
	int* ptr2 = new int(input2);
	int* ptr3 = new int(input3);

	// Display input
	cout << "\nUser input values are:";
	cout << "\nInput 1:" << input1;
	cout << "\nInput 2:" << input2;
	cout << "\nInput 3:" << input3;

	// Pointer content display
	cout << "\n\nContent of Pointers:";
	cout << "\nPointer 1 points to:" << *ptr1 << " at memory location:" << &ptr1;
	cout << "\nPointer 2 points to:" << *ptr2 << " at memory location:" << &ptr2;
	cout << "\nPointer 3 points to:" << *ptr3 << " at memory location:" << &ptr3;

	// Release dynamic memory
	delete ptr1;
	delete ptr2;
	delete ptr3;

	return 0;
}
