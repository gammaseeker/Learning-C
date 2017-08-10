#include <iostream>
int main()
{
    int sum = 0, val  = 1;
    // keep executing the while as long as val is less than or equal to 10
    while (val <= 10)  {
        sum += val;   // assigns sum + val to sum
        ++val;        // add 1 to val
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl
              
    int sum2 = 0;
    // sum2 values from 1 through 10 inclusive
    for (int val = 1; val <= 10; ++val)
        sum2 += val;  // equivalent to sum = sum + val
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum2 << std::endl;
              
    return 0;
}
