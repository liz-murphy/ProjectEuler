#include <iostream>
#include <math.h>

int main()
{
    bool found = false;
    for(int i=1000; i > 0; i--)
    {
        for(int j=i-1; j > 0; j--)
        {
            for(int k=j; k > 0; k--)
            {
                if(pow(i,2) != pow(j,2) + pow(k,2))
                    continue;

                if(i+j+k == 1000)
                {
                    found = true;
                    std::cout << "Triplet is " << i << ", " << j << ", " << k << "\n";
                    break;
                }
            }
            if(found)
                break;
        }
        if(found)
            break;
    }
}
