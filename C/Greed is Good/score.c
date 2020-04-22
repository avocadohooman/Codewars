#include <stdio.h>


int triple_one(const int dice[5])
{
    int i = 0;
    int c = 0;

    while (i < 5)
    {
        if (dice[i] == 1)
            c++;
        if (c == 3)
            return (1);
        i++;
    }
    return (0);
}

int triple_two(const int dice[5])
{
    int i = 0;
    int c = 0;

    while (i < 5)
    {
        if (dice[i] == 2)
            c++;
        if (c == 3)
            return (1);
        i++;
    }
    return (0);
}

int triple_three(const int dice[5])
{
    int i = 0;
    int c = 0;

    while (i < 5)
    {
        if (dice[i] == 3)
            c++;
        if (c == 3)
            return (1);
        i++;
    }
    return (0);
}

int triple_four(const int dice[5])
{
    int i = 0;
    int c = 0;

    while (i < 5)
    {
        if (dice[i] == 4)
            c++;
        if (c == 3)
            return (1);
        i++;
    }
    return (0);
}


int triple_five(const int dice[5])
{
    int i = 0;
    int c = 0;

    while (i < 5)
    {
        if (dice[i] == 5)
            c++;
        if (c == 3)
            return (1);
        i++;
    }
    return (0);
}

int triple_six(const int dice[5])
{
    int i = 0;
    int c = 0;

    while (i < 5)
    {
        if (dice[i] == 6)
            c++;
        if (c == 3)
            return (1);
        i++;
    }
    return (0);
}

int score(const int dice[5]) 
{ 
    int res = 0;
    int i = 0;
    int c1 = 0;
    int c5 = 0;

    if (triple_one(dice) == 1)
        {
            res = res + 1000;
            while (i < 5)
            {
                if (dice[i] == 1)
                    c1++;
                if (dice[i] == 5)
                    c5++;
                i++;
            }
            if (c1 > 3)
                res = res + ((c1 - 3) * 100);
            if (c5 > 0)
                res = res + (c5 * 50);
        }
    else if (triple_two(dice) == 1)
        {
            res = res + 200;
            while (i < 5)
            {
                if (dice[i] == 1)
                    c1++;
                if (dice[i] == 5)
                    c5++;
                i++;
            }
            if (c1 > 0)
                res = res + (c1 * 100);
            if (c5 > 0)
                res = res + (c5 * 50);
        }
    else if (triple_three(dice) == 1)
        {
            res = res + 300;
            while (i < 5)
            {
                if (dice[i] == 1)
                    c1++;
                if (dice[i] == 5)
                    c5++;
                i++;
            }
            if (c1 > 0)
                res = res + (c1 * 100);
            if (c5 > 0)
                res = res + (c5 * 50);
        }
    else if (triple_four(dice) == 1)
        {
            res = res + 400;
            while (i < 5)
            {
                if (dice[i] == 1)
                    c1++;
                if (dice[i] == 5)
                    c5++;
                i++;
            }
            if (c1 > 0)
                res = res + (c1 * 100);
            if (c5 > 0)
                res = res + (c5 * 50);
        }
    else if (triple_five(dice) == 1)
        {
            res = res + 500;
            while (i < 5)
            {
                if (dice[i] == 1)
                    c1++;
                if (dice[i] == 5)
                    c5++;
                i++;
            }
            if (c1 > 0)
                res = res + (c1 * 100);
            if (c5 > 3)
                res = res + ((c5 - 3) * 50);
        }
    else if (triple_six(dice) == 1)
        {
            res = res + 600;
            while (i < 5)
            {
                if (dice[i] == 1)
                    c1++;
                if (dice[i] == 5)
                    c5++;
                i++;
            }
            if (c1 > 0)
                res = res + (c1 * 100);
            if (c5 > 0)
                res = res + (c5 * 50);
        }
    else  
        {
            while (i < 5)
            {
                if (dice[i] == 1)
                    c1++;
                if (dice[i] == 5)
                    c5++;
                i++;
            }
            if (c1 > 0)
                res = res + (c1 * 100);
            if (c5 > 0)
                res = res + (c5 * 50);
        }
    return (res);
}

int main()
{
    const int dice[5] = {2, 4, 4, 5, 4};

    printf("%d\n", score(dice));
    return (0);
}