#include <stdio.h>

long zeros(long n)
{
    long count;
    long div = 5;

    count = 0;
    if (n < 0)
        return (-1);
    if (n == 0)
        return (0);
    while (div <= n)
    {
      count += n / div;
      div *= 5;
     }
    return (count);
}

int main()
{
    long n = 1000000000;

    printf("%ld\n", zeros(n));
    return (0);
}