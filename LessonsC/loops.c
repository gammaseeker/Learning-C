#include <stdio.h>

int main()
{
	int i; 
	int a = 0;
	for(i = 0; i < 3; i = i+1)
	{
		printf("Value of i: %d\n", i);
	}
	
	while(a < 5)
	{
		printf("Value of i: %d\n", a);
		a = a + 1;
	}
	return 0;
}
