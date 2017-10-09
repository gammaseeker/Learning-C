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

void frameName()
{
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	const string greeting = "Hello, " + name + "!";
	const string spaces(greeting.size(), ' ');
	const string second = "* " + spaces + " *";
	const string first(second.size(), '*');
	cout << endl;
	cout << first << endl;
	cout << second << endl;
	cout << " " << greeting << " *" << endl;
	cout << second << endl;
	cout << first << endl;
}

int main()
{
	//Order matters. Functions must come before main method
	input();
	printmessage();
	frameName();
	return 0;
}
