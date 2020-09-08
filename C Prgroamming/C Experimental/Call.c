#include <stdio.h>

void X(int a, int b)
{
    printf("Local Variable a of Z has value = %d and address %p\n", a, &a);
    printf("Local Variable b of Z has value = %d and address %p\n", b, &b);
}

void Y(int c, char d)
{
    printf("Local Variable c of Y has value = %d and address %p\n", c, &c);
    printf("Local Variable d of Y has value = %c and address %p\n", d, &d);
}

void Z()
{
    printf("Z is Empty\n");
}

void main()
{
    X(1, 2);
    Y(2, 'A');
    Z();
}