#include <stdio.h>

int decreaseV(int i)
{
    printf("Value of n in decrement function before decreasing by value is : %d\n", i);
    i--;
    printf("Value of n in decrement function after decreasing by value is : %d\n", i);
}

void decreaseR(int *i)
{
    printf("Value of n in decrement function before decreasing by Reference is : %d\n", *i);
    *i = *i - 1;
    printf("Value of n in decrement function after decreasing by Reference is : %d\n", *i);
}

void main()
{
    int n = 72;

    printf("Call by Value\n\n");
    printf("Value of n in main before calling decrement function by value is : %d\n", n);
    decreaseV(n);
    printf("Value of n in main after decrementing by value is : %d\n", n);

    printf("\nCall by Reference\n");
    printf("\nValue of n in main before calling decrement function by Reference is : %d\n", n);
    decreaseR(&n);
    printf("Value of n in main after decrementing by Reference is : %d\n", n);
}
