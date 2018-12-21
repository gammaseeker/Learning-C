#include <iostream>
using namespace std;
//include directive. Make some set of code available to us
//iostream is part of c++ standard library

int main()
{
	string name = "";
	int age = 0;

	cout << "Hello World!" << endl;
	cout << "Eclipse is working!" << endl;

	cout << "Enter your name: " << endl;
	cin >> name;

	cout << "Enter your age: " << endl;
	cin >> age;

	cout << "Your name is: " << name << " and you are " << age << " years old." << endl;
	return 0;
}
