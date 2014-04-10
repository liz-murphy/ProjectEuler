#include <iostream>
#include <math.h>

bool ispalindrome(int n)
{
    int str_rep[6];
    int size = log10(n)+1;

    std::cout << "size is " << size << "\n";
    int rem;
    int ret = n;
    std::cout << "n is " << n << "\n";

    for(int i=0; i < size-1; i++)
    {
        str_rep[i] = ret%10;
        ret = ret/10;
        if(i==size-2)        
            str_rep[size-1] = ret;
    }

    for(int i=size-1; i >=0; i--)
        std::cout << str_rep[i] << " ";
    std::cout << "\n";
    
    bool is_palindrome = true;
    int lim = size/2;
    for(int i=0; i < lim; i++)
    {
            if(str_rep[i] != str_rep[size - i- 1])
                return false;
    }
    return is_palindrome;
}
int main()
{
    bool found = false;
    int biggest_palindrome=0;;
    int i,j;
    for(i=999; i > 900; i--)
    {
        for(j=999; j > 900; j--)
        {
            int val = i*j;
            std::cout << i << "x" << j << "=" << val << "\n";
            if(ispalindrome(val))
            {
                std::cout << "Value " << val << "\n";
                if(val > biggest_palindrome)
                {
                  biggest_palindrome = val;
                  break;
                }
            }
        }
    }
    std::cout << "Biggest palindrome is " << biggest_palindrome << "\n";
}
