#include<stdio.h>
void main()
{
    int n,count;
    printf("\nEnter a number ");
    scanf("%d",&n);
    count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("\nHence the number of digits in the number are %d",count);
}
