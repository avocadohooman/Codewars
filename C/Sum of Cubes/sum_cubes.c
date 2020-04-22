#include <stdio.h>

unsigned long long sum_cubes(unsigned short n)
{
    unsigned long long res;
    unsigned long long i;

    i = 1;
    while (i < n)
    {
        res += i * i * i;
        i++;
    }
    return (res);
    /*if (n == 1)
        return (1);  
    return (n * n * n + sum_cubes(n - 1));*/
}

int main ()
{
    printf("%llu\n", sum_cubes(65535));
    return (0);
}