#include <iostream>



	using namespace std;

int main()
{
	float A;
	float B;
	float X;
	cout << "Hello my name is Zheng He and I'm going to solve the equation" <<  endl;
	cout << "AX+B=0" << endl;
	cout << "For X" << endl;

	cout << "Please enter a value for A: ";
	cin >> A;


	
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "A=" << A << endl;
	cout << "B=" << B << endl;

	X = -B / A;
	cout << "And X=" << X << endl;
}

