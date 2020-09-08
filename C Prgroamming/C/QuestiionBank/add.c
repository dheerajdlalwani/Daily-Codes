#include<stdio.h>
void main()
{
    int m,n,a[10][10],i,j,k,b[10][10],c[10][10],d[10][10];
    printf("\nEnter the dimensions for the matrix");
    scanf("%d%d",&m,&n);

    printf("\nEnter the elements for matrix a\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    printf("\nEnter the elements for matrix b\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

/*Matrix ka addition*/
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
    }

/*Printing of added matrix*/
    printf("\nAddition of the Matrices is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }


/*Multiplication of matrix+in this case we are not taking separate dimensions for two matrix so final in second for loop we won't take q*/
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            d[i][j]=0;
            for(k=0;k<n;k++)
            {
                d[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

        printf("\nMultiplication of the Matrices is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",d[i][j]);
        }
        printf("\n");
    }
}
