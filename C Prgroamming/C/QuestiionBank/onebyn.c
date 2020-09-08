#include<stdio.h>
void main()
{
    int i,n,a;
    float sum,term;

    printf("Please enter a value for n\n");
    scanf("%d",&n);
    printf("Please enter a value for a\n");
    scanf("%d",&a);

    sum=0.0;
    term=a;
    for(i=2;i<=n+1;i=i+2)
    {
        sum=sum+term;
        term=term*(a*a/(i*(i+1)))*(-1.0);
    }
    printf("\nHence the sum is %f",sum);

}
