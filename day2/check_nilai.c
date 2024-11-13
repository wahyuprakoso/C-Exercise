#include <stdio.h>

int main()
{
    printf("masukan nilai = ");
    int value;
    scanf("%d", &value);

    switch (value)
    {
    case 0 ... 59:
        printf("E\n");
        break;
    case 60 ... 69:
        printf("D\n");
        break;
    case 70 ... 79:
        printf("C\n");
        break;
    case 80 ... 89:
        printf("B\n");
        break;
    case 90 ... 100:
        printf("A\n");
        break;
    default:
        printf("Nilai tidak di temukan");
        break;
    }
    return 0;
}