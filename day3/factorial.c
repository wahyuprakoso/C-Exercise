#include <stdio.h>

int main()
{
    int number[] = {1, 3, 4, 3, 2, 2, 6};
    int max = number[0];
    int count = sizeof(number) / sizeof(number[0]);
    for (int i = 0; i < count; i++)
    {
        int num = number[i];
        if (max < num)
        {
            max = num;
        }
    }
    printf("%d\n", max);
    int value = 1;
    int i = 1;
    do
    {
        value = value * i;
        i++;
    } while (i <= max);
    printf("%d", value);
    return 0;
}