#include <stdio.h>

int main()
{
    float a;
    float b;
    int ops;
    printf("please input first number: ");
    scanf("%f", &a);
    printf("please input second number: ");
    scanf("%f", &b);
    printf("[1] if you want addition\n");
    printf("[2] if you want substraction\n");
    printf("[3] if you want multiplication\n");
    printf("[4] if you want division\n");
    printf("Please select your operation: ");
    scanf("%d", &ops);
    float value;
    switch (ops)
    {
    case 1:
        value = a + b;
        break;
    case 2:
        value = a - b;
        break;
    case 3:
        value = a * b;
        break;
    case 4:
        value = a / b;
        break;
    default:
        printf("operation is incorect");
        return 1;
    }
    printf("result = %.2f \n", value);
    return 0;
}