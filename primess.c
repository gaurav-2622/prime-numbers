#include <stdio.h>

int prime(int n)
{
    if (n<2) return 0;
    if (n == 2) return 1;
    for (int i = 3; i< n; i++)
    {
        if (n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    for (int i = 0; i< 100; i++)
    {
        if (prime(i))
            printf("%d is a prime \n",i);
    }
    return 0;
}