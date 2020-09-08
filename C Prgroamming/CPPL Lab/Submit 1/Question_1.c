#include<stdio.h>
#include"external_1.c"
extern char c;
char a='p';
void f1()
{
    printf("\nThe value of a at entry in f1is %c\n",a);
    a = 'r';
    printf("The value of a after modification in f1 is %c\n\n",a);
}

void f2()
{
    char b ='j'; int i;
    printf("The initial value of b in f2 is %c\n",b);
    b = 'k';
    for(i = 0 ; i < 4 ; i++)
    {
        char d = b++;
        printf("The value of d after modification in f2 is %c\n",d);
    }
    printf("The value of b after modification in f2 is %c\n",b);
}
void main()
{
    printf("\nThe value of c at entry in main function is %c\n",c);
    printf("The value of a at entry in main function is %c\n",a);
    c = 'y';
    a = 'q';
    f1();
    f2();
    f1();
    printf("The value of c after modification in main function is %c\n",c);
    printf("The value of a after modification in main function is %c\n",a);
}
