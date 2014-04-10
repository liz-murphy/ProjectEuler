#include <iostream>
#include <math.h>
int main()
{
    int sum=0;
    int sum_squares=0;
    for(int i= 1; i <= 100; i++)
    {
        sum+=i;
        sum_squares+=pow(i,2);
    }
    int diff = pow(sum,2)-sum_squares; 
    std::cout << "Sum of squares: " << sum_squares << " Square of sum: " << pow(sum,2) << "Difference: " << diff << "\n";
}
