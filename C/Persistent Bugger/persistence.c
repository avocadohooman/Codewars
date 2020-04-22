#include <stdio.h>

int persistence(int n) {

    int a;
    int b = 1;
    int x = 0; 
    while (n>9)
    {
        while(n>0)
        {
            a = n%10;
            n = n/10;
            b = b*a;
        }
        n = b;
        b = 1;
        x++;
    }        
    return (x);
}

int main()
{
    int n;

    n = 33;
    printf("%d\n", persistence(n));
    return (0);
}