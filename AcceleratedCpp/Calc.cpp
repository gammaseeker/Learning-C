#include <iostream>

//using namespace std;

void printSomething(int num)
{
	std::cout << "The number you have given me is " << num << std::endl;
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

	std::cout << "Enter a number \n";
	std::cin >> a;
	std::cout << "Enter another number \n";
	std::cin >> b;
	sum = sum(a, b);
	std::cout << "The sum is: " << sum << std::endl;
	//std::cout << "The sum is: " << sum(a, b) << std::endl; This is an eclipse bug, it should run

	printSomething(sum);

	return 0;
}
