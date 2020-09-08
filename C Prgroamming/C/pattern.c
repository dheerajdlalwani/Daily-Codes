#include<stdio.h>
void main()
{
    int i,sp,j,k,n;
    printf("\nEnter the number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(sp=1;sp<=n-i;sp++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        k=1;
        for(sp=1;sp<=n-i+1;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=i-1;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}
