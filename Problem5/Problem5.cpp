#include <iostream>

bool is_divisible(int n)
{
    for(int i=20; i > 1; i--)
    {
        if( (n%i) != 0)
            return false;
    }
    return true;
}
int main()
{
    bool found = false;
    int i = 1;
    while(!found)
    {
      if(is_divisible(i))
        found = true;
      else
          i++;
    }
    std::cout << "Smallest number is " << i << "\n";
}
