#include <stdio.h>

int main()
{
    /* code */
    printf("Enter a number for getting the multiplication table\n");
    int a, i;
    scanf("%d", &a);
    printf("\nMultiplication table of %d is as follows\n", a);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }
    return 0;
}
