#include <stdio.h>
#include <stdlib.h> 

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int     ft_strlen_2darray(char **str)
{
    int i;
    int j;
    int len;

    i = 0;
    len = 0;
    while (i < 5)
    {
        j = 0;
        while (str[i][j] != '\0')
        {
            j++;
            len++;
        }
        i++;
    }
    printf("%d\n", len);
    return (len);
}

char** movingShift(char* strng, int shift) 
{
    int i;
    int let;
    int len;
    int distr;
    int r;
    char **s;

    len = ft_strlen(strng);
    printf("%d\n", len);
    i = 0;
    let = 0;
    s = malloc(sizeof(char *) * 5 + 1);
    if (len % 5 == 0)
      r = len / 5;
    else 
        r += (len / 5) + (len % 5);
    while (i < 5)
    {
        s[i] = malloc(sizeof(char) * r + 1); 
        distr = 0;
        while (distr < r)
        {
            if (strng[let] >= 'a' && strng[let] <= 'z')
                s[i][distr]= (((strng[let] - 'a' + shift) % 26) + 'a');
            else if (strng[let] >= 'A' && strng[let] <= 'Z')
                s[i][distr] = (((strng[let] - 'A' + shift) % 26) + 'A');
            else 
                s[i][distr] = strng[let];
            shift++;
            let++;
            distr++;
        }
        printf("%d\n", distr);
        s[i][distr] = '\0';
        i++;
    }
    return (s);
}

char* demovingShift(char** s, int shift) 
{
    char *msg;
    int i;
    int let;
    int run;
    int a;

    msg = malloc(sizeof(char) * ft_strlen_2darray(s) + 1);
    let = 0;
    i = 0;
    while (i < 5)
    {
        run = 0;
        while (s[i][run] != '\0')
        {
            a = 0;
            if (s[i][run] >= 'a' && s[i][run] <= 'z')
            {
                while ((s[i][run] - 'a' - shift + a) < 0)
                    a += 26;
                msg[let] = (((s[i][run] - 'a' - shift + a) % 26) + 'a');
            }
            else if (s[i][run] >= 'A' && s[i][run] <= 'Z')
            {
                while ((s[i][run] - 'A' - shift + a) < 0)
                    a += 26;
                msg[let] = (((s[i][run] - 'A' - shift + a) % 26) + 'A');
            }
            else 
                msg[let] = s[i][run];
            shift++;
            let++;
            run++;
        }
        i++;
    }
    msg[let] = '\0';
    return (msg);
}

int main()
{
    char *u = "abcdefghijklmnop";
    char **s;
    int i = 0;

    s = movingShift(u, 2);
    while (i < 5)
    {
        printf("%s\n", s[i]);
        i++;
    }
    printf("%s\n", demovingShift(s, 2));
    printf("abcdefghijklmnop\n");
    return (0);
}