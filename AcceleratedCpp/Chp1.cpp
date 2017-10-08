#include <iostream>
using namespace std;

void input()
{
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;
}

void printmessage()
{
  cout << "I'm a function!";
}

int main()
{
	//Order matters. Functions must come before main method
	input();
	printmessage();
	return 0;
}
