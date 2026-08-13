#include <stdio.h>

int main(void)
{
    int num;
    printf("enter a number");
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    if (num > 0) {
        printf("the number is positive");
    } else if (num < 0) {
        printf("the number is negative");
    } else {
        printf("the number is zero");
    }

    return 0;
} 