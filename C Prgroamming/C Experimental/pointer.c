#include <stdio.h>
void main()
{
    // int a = 55;
    // int *p = &a;
    int b = 15;
    int *a = &b;
    int *p;
    p = a;
    int **p2 = &p;
    printf("\n %d", *a);
    printf("\n %d", a);
    printf("\n %d", p);
    printf("\n %d", *p);
    printf("\n %d", &p);
    printf("\n %d", **p2);
    printf("\n %d", &p2);
    printf("\n %d", p2);
}