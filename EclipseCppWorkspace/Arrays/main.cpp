#include<iostream>

int main()
{
	double dec1[10];
	double dec2[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
	double dec3[] = {1000.0, 2.0, 3.4, 17.0, 50.0};
	//std::cout << dec3[4] << std::endl;
	int n[10];
	for(int i = 0; i < 10; i++){
		n[i] = i + 100;
	}


	for(double d : dec2){
		std::cout << d << " ";
	}
	std::cout << std::endl;

	for(double d : dec3){
		std::cout << d << " ";
	}
	std::cout << std::endl;

	for(int num : n){
		std::cout << num << " ";
	}

	return 0;
}
