#include <stdio.h>
#include <stdlib.h> 
double money_value(char s[])
{
    int i;
    int c;
    double result;

    i = 0;
    c = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
            c++;
        i++;
    }
    if (c == 0)
        return (0.0);
    i = 0;
    result = malloc(sizeof(double) * 100);
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sprintf(result, "%d%s", result, s[i]);
        }
        i++;
    }
    return (result);
}

int main()
{
    char *s = " $12.34";

    printf("%f\n", money_value(s));
    return (0);
}