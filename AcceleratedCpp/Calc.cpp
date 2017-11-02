#include <iostream>

using namespace std;

void printSomething(int num)
{
	cout << "The number you have given me is " << num << endl;
}

int sum(int a, int b)
{
	return a + b;
}

int main()
{
	int a;
	int b;
	int sum;

	cout << "Enter a number \n";
	cin >> a;
	cout << "Enter another number \n";
	cin >> b;
	sum = sum(a, b);
	cout << "The sum is: " << sum << endl;
	//cout << "The sum is: " << sum(a, b) << endl; This is an eclipse bug, it should run

	printSomething(sum);

	return 0;
}
