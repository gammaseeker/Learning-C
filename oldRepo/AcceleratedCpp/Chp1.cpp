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
	const string greeting = "Hello, " + name + "!";// const defines constant variable
	const string spaces(greeting.size(), ' ');//contains as many spaces as the number of characters in greeting
	const string second = "* " + spaces + " *";
	const string first(second.size(), '*');
	cout << endl;
	cout << first << endl;
	cout << second << endl;
	cout << " " << greeting << " *" << endl;
	cout << second << endl;
	cout << first << endl;
}

void experiment1()
{
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	const string greeting = "Hello, " + name + "!";
	cout << greeting;
}

void experiment2()
{
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	const string greeting = "Hello, " + name + "!";
	cout << greeting;
	const string spaces(greeting.size(), '.');
	cout << spaces;
}

//int main()
//{
//	//Order matters. Functions must come before main method
//	input();
//	printmessage();
//	//frameName();
//	//experiment1();
//	experiment2();
//	return 0;
//}
