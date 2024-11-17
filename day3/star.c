#include <stdio.h>

int main()
{
    int v = 10;
    for (int i = 0; i < v; i++)
    {
        for (int a = 0; a < i; a++)
        {
            printf("*");
        }
        printf("\n");
    }

    int i = 0;
    while (i < 10)
    {
        /* code */
        int a = 0;
        while (a < i)
        {
            printf("*");
            a++;
        }
        printf("\n");
        i++;
    }
    int x = 0;
    do
    {
        for (int i = 0; i < x; i++)
        {
            printf("*");
        }
        printf("\n");
        x++;
    } while (x < 10);

    return 0;
}