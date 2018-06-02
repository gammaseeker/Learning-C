#include<iostream>

int main()
{
	int change, rem, qs, ds, ns, ps;
	std::cout << "Input change amount (1-99): ";
	std::cin >> change;
	qs = change / 25;
	rem = change % 25;
	ds = rem/10;
	rem = rem%10;
	ns=rem/5;
	rem=rem%5;
	ps=rem;
	std::cout << qs <<  " quarters,"<<  ds<<  " dimes,";
	std::cout << ns << " nickels and " << ps <<" pennies"<< std::endl;
	return 0;
}
