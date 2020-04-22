#include <stdio.h>

int digital_root(int tree)
{
    int root;
    int tmp;

    root = 0;
    tmp = 0;
    while (tree != 0)
    {
        tmp = tree % 10;
        tree = tree / 10;
        root = root + tmp;
    }
    while (root >= 10)
    {
        tree = root;
        root = 0;
        tmp = 0;
        while (tree != 0)
        {
            tmp = tree % 10;
            tree = tree / 10;
            root = root + tmp;   
        }
    }
    return (root);    
}

int main()
{
    int tree = 493193;

    printf("%d\n", digital_root(tree));
    return (0);
}