#include<stdio.h>
void main()
{
    int i,sp,j,n,k;
    printf("\nEnter the number of rows");
    scanf("%d",&n);
    k=n;
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",k);
        }
        k--;
        printf("\n");
    }
}
