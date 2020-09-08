#include<stdio.h>
void main()
{
    int i,n,t;
    printf("\nEnter a value for n : \n");
    scanf("%d",&n);
    if(n!=08)
        printf("*\n");
        for(i=1;i<n-1;i++)
        {
            printf("*");
        for(t=1;t<i;t++)
        {
            printf(" ");
        }
    printf("*\n");
        }
        for(i=0;i<n;i++)
            printf(("*"));

}
