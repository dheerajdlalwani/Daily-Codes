#include<stdio.h>

struct car
{
    char name[20];
    int model_no;
    int milage;
};

union country {
    char street[20], city[20], state[10];
};

void size_int()
{
    int a[2];
    char *p1, *p2;

    p1 = &a[0];
    p2 = &a[1];

    printf("\nSize of Int = %d",p2-p1);
}

void size_float()
{
    float o[2];
    char *p1, *p2;

    p1 = &o[0];
    p2 = &o[1];

    printf("\nSize of Float = %d",p2-p1);
}

void size_char()
{
    char z[2];
    char *p1, *p2;

    p1=&z[0];
    p2=&z[1];

    printf("\nSize of Char = %d",p2-p1);
}

void size_struct()
{
    struct car car[2];
    char *p1, *p2;

    p1=&car[0];
    p2=&car[1];

    printf("\nSize of Struct = %d",p2-p1);
}

void size_union()
{
    union country country[2];
    char *p1, *p2;

    p1=&country[0];
    p2=&country[1];

    printf("\nSize of Union = %d",p2-p1);
}

void main()
{
    char c1 = 'p';
    int i1 = 72;
    float f = 72.0;
    double d = 72.0;
    struct car car[2];
    union country country[2];

    printf("Equality Testing of types\n");

    //Character and Integer
    if ( c1 == i1 )
        printf("\nTypes char and int are comparable");
    else
        printf("\nTypes char and int are not comparable");

    //Character and Float
    if ( c1 == f )
        printf("\nTypes char and float are comparable");
    else
        printf("\nTypes char and float are not comparable");

    //Character and Double
    if ( c1 == d )
        printf("\nTypes char and double are comparable");
    else
        printf("\nTypes char and double are not comparable");

    //Integer Float
    if ( i1 == f )
        printf("\nTypes int and float are comparable");
    else
        printf("\nTypes int and float are not comparable");

    //Integer Double
    if ( i1 == d )
        printf("\nTypes int and double are comparable");
    else
        printf("\nTypes int and double are not comparable");

    //Float Double
    if ( f == d )
        printf("\nTypes float and double are comparable");
    else
        printf("\nTypes float and double are not comparable");

    printf("\n\nAddress printing");
    int a[2],i;
    printf("\n\nAddresses Array of Int");
    printf("\nAddress of array a is %d\n",&a);
    for(i=0;i<2;i++)
        printf("Address of array a at index %d is %d\n",i,&a[i]);

    float b[2];
    printf("\n\nAddresses Array of Float");
    printf("\nAddress of array b is %d\n",&b);
    for(i=0;i<2;i++)
        printf("Address of array b at index %d is %d\n",i,&b[i]);

    char x[2];
    printf("\n\nAddresses Array of Char\n");
    printf("Address of char c array is %d\n",&x);
    x[0]='d';
    x[1]='a';
    printf("Address of array c at index 0 is %d\n",&x[0]);
    printf("Address of array c at index 1 is %d\n",&x[1]);
    printf("\nAddresses Array of structures\n");
    for (i = 0; i < 2; i++)
        printf("Address of struct at index %d = %d\n", i, &car[i]);

    printf("\nAddresses Array of union\n");
    for (i = 0; i < 2; i++)
        printf("Address of Union at index %d = %d\n", i, &country[i]);

    printf("\nSizes of Data Types\n");

    //Size of Double
    double r[2];
    char *p1, *p2;

    p1=&r[0];
    p2=&r[1];

    printf("\nSize of Double = %d",p2-p1);

    size_int();
    size_float();
    size_char();
    size_struct();
    size_union();
}

/*
Sizes of Data Types

Size of Double = 8
Size of Int = 4
Size of Float = 4
Size of Char = 1
Size of Struct = 28
Size of Union = 20
*/
