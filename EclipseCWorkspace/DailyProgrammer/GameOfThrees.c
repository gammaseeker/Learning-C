#include <stdio.h>

int main()
{
	int input = 100;
	while(input > 1){
		if(input%3 == 0){
			printf("%d 0\n", input);
			input = input/3;
		}
		else{
			if(input%3 == 1){
				printf("%d -1\n", input);
				input = (input - 1)/3;
			}
			else{
				printf("%d 1\n", input);
				input = (input + 1)/3;
			}
		}
	}
	printf("1");
	return 0;
}
