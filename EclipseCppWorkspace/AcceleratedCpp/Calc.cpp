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
	int sumNum;

	int d = 5;
	int e (6);
	int f {7};

	std::cout << "Enter a number \n";
	std::cin >> a;
	std::cout << "Enter another number \n";
	std::cin >> b;
	sumNum = sum(a, b);
	std::cout << "The sum is: " << sumNum << std::endl;
	//std::cout << "The sum is: " << sum(a, b) << std::endl; This is an eclipse bug, it should run

	printSomething(sumNum);

	std::cout << d << e << f << std::endl;
	return 0;
}
