#include <iostream>
#include <cmath>

long prime(long n)
{
    long retval = n;
    for(long i=2; i < long(std::sqrt(n))+1; i++)
    {
        if(n%i == 0)
        {
            return(prime(n/i));
        }
    }
    return retval;
}

int main()
{

    long number = 600851475143;

    long res = prime(number);
    std::cout << "\nLargest prime is " << res << "\n";
}
