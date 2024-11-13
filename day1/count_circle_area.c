#include <stdio.h>
#define PI 3.14
int main() {
    float r = 0;
    printf("insert r = ");
    scanf("%f", &r);
    float area = PI*r*r;
    printf("your circle area is %.2f\n", area);
    return 0;
}