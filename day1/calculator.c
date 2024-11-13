#include <stdio.h>

int main()
{
    printf("calculator input 2 number");
    float a;
    float b;
    printf("input first number = ");
    scanf("%f", &a);
    printf("input second number = ");
    scanf("%f", &b);
    float penjumlahan = a + b;
    float pengurangan = a - b;
    float perkalian = a * b;
    float pembagian = a / b;
    printf("penjumlahan = %2.f\n",penjumlahan);
    printf("pengurangan %.2f\n", pengurangan);
    printf("perkalian = %.2f\n",perkalian);
    printf("pembagian = %.2f\n", pembagian);
    return 0;
}