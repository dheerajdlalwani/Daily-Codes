#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,sp;
    printf("\nEnter thee no. of rows");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(sp=1;sp<=i-1;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=n+1-i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
