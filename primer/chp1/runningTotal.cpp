#include<iostream>
int main()
{
    int sum = 0;
    int value = 0;
    while(std::cin >> value){ //ctr-d to trigger end of file
        sum += value;
    }
    std::cout << "The sum is: " << sum;
    return 0;
}
