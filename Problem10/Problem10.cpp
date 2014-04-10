#include <iostream>
#include <math.h>

long prime(long n)
{
    long retval = n;
    for(long i=2; i < long(sqrt(n))+1; i++)
    {
        if(n%i == 0)
        {
            return(prime(n/i));
        }
    }
    return retval;
}

bool isprime(long n)
{
    if(prime(n) == n)
        return true;
    else
        return false;
}

int main()
{
    long prime_sum=0;
    long sum_below = 2000000;
    for(long i=2; i < sum_below; i++)    
    {
        if(isprime(i))
            prime_sum+=i;
    }
    std::cout << "The sum is " << prime_sum  << "\n";
}
