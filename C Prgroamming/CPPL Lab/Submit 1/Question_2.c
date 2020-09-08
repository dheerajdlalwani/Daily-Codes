#include<stdio.h>
#include"external_2.c"
extern char c;
char a='p';
void f2()
{
    char a ='j';
    int i;
    printf("\nThe value of c at entry in f2 is %c\n",c);
    printf("The value of a at entry in f2 is %c\n",a);
    a = 'k';
    for(i = 0 ; i < 4 ; i++)
    {
        char c = a++;
        printf("The value of c after modification in loop witin f2 is %c\n",c);
    }
    printf("The value of a after modification in f2 is %c\n",a);
    printf("The value of c after modification in f2 is %c\n\n",c);
}
void main()
{
    printf("\nThe value of c at entry in main function is %c\n",c);
    printf("The value of a at entry in main function is %c\n",a);
    c = 'y';
    a = 'q';
    f2();
    printf("The value of c after modification in main function is %c\n",c);
    printf("The value of a after modification in main function is %c\n",a);
}

