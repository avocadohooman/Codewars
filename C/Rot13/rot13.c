#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
        i++;
    return (i);
}

char *rot13(const char *src)
{
    char *rot13;
    int i = 0;

    rot13 = malloc(sizeof(char) * ft_strlen(src) + 1);
    while (src[i] != '\0')
    {
        if ((src[i] >= 'a' && src[i] <= 'm') || (src[i] >= 'A' && src[i] <= 'M'))
            rot13[i] = src[i] + 13;
        else if ((src[i] >= 'n' && src[i] <= 'z') || (src[i] >= 'N' && src[i] <= 'Z'))
            rot13[i] = src[i] - 13;
        else
            rot13[i] = src[i];
        i++;
    }
    rot13[i] = '\0';
    return (rot13);
}

int main()
{
    const char *src = "Hello World";

    printf("%s\n", rot13(src));
    return (0);
}