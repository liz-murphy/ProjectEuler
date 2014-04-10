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
    bool found = false;
    long i = 2;
    int prime_count = 0;
    int desired_prime = 10001;
    while(!found)
    {
        if(isprime(i))
        {
            prime_count++;
            if(prime_count == desired_prime)
                found = true;
        }
        i++;
    }
    std::cout << "The " << desired_prime << "th" << " prime number is " << i-1 << "\n";
}
