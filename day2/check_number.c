#include <stdio.h>

int main(){
    printf("Please input number: ");
    float v;
    scanf("%f",&v);
    if (v > 0){
        printf("your number is positive\n");
    }else if (v < 0){
        printf("your number is negative\n");
    }else{
        printf("your number is 0\n");
    }
    return 0;
}