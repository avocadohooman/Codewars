#include <stdio.h>
#include <stdlib.h> 

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
    return (len);
}

char *slice_str(char* str, int start, int step) 
{
    char *slice; 
    int i;

    i = 0;
    slice = malloc(sizeof(char) * (step));
    while (i < step)
    {
        slice[i] = *(str + start + i);
        i++;
    }
    slice[i] = 0;
    return slice;
}

char** movingShift(char* strng, int shift) 
{
    char* slice_str(char* str, int start, int step);
    int step;
    int bufSize;
    int start;
    int i;
    char **retArr;
    char *buf;
    
    retArr = (char**)malloc(sizeof(char *) * 5);
    bufSize = strlen(strng);
    buf = (char *)malloc(sizeof(char) * bufSize);
    strcpy(buf,strng);
    i = 0;
    while (i < bufSize)
    {
        if (buf[i] >= 'A' && buf[i] <= 'Z') 
        {    
            buf[i] = ((buf[i] - 'A' + shift) % 26) + 'A';
        }   
        else if(buf[i] >= 'a' && buf[i] <= 'z') 
        {    
            buf[i] = ((buf[i] - 'a' + shift) % 26) + 'a';
        }
        i++;
        shift++;
    } 
    step = bufSize % 5 == 0 ? bufSize / 5 : (bufSize / 5) + 1;
    i = 0;
    start = 0;
    while (i < 5)
    {
        retArr[i] = slice_str(buf, start, step);
        start += step;
        if (bufSize - start < step) 
            step = bufSize - start;
        i++;
    }
    return retArr;
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