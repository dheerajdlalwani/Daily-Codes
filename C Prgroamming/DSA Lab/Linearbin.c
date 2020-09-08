#include<stdio.h>
int linear_search(int a[100],int n,int ele)
{
    int i;
    for(i = 0; i < n; i++)
        {
            if(a[i] == ele)
            {
                printf("%d is present at position %d \n",ele,i+1);
                break;
            }
        }
        if(i == n)
        printf("%d is not present in the array \n",ele);
}
int binary_search(int a[100], int n, int ele, int first, int last, int middle)
{
    int i;
    first = 0;
    last = n - 1;
    middle = (first + last)/2;
    while (first <= last)
        {
            if(a[middle] < ele)
            first = middle + 1;
            else if (a[middle] == ele)
            {
                printf("%d is found at position %d \n",ele,middle+1);
                break;
            }
            else
                last = middle - 1;
                middle = (first + last)/2;
                }
            if(first > last)
                printf("%d is not present in the array \n",ele);
                }
int main()
{
    int a[100], choice,n,ele,i,first,last,middle;
    printf("Enter 1. for LINEAR SEARCH\nEnter 2. for BINARY SEARCH\n");
    scanf("%d",&choice);
    {

    switch(choice)
    {
    case 1:
        {
          printf("\nLINEAR SEARCH executed");
         printf("Enter size of the array : \n");
                scanf("%d",&n);

                printf("Enter the elements : \n");
                for(i = 0; i < n; i++)
                    scanf("%d",&a[i]);

                printf("Enter the element to be searched : \n");
                scanf("%d",&ele);

                linear_search(a,n,ele);
          break;
        }
    case 2:
        {
            printf("\nBINARY SEARCH executed");
             printf("\nEnter size of the array : ");
                scanf("%d",&n);

                printf("\nEnter the elements : ");
                for(i = 0; i < n; i++)
                    scanf("%d",&a[i]);

                printf("\nEnter the element to be searched : ");
                scanf("%d",&ele);
                binary_search(a,n,ele,first,last,middle);
            break;
        }
    default:
        {
            printf("Invalid command");
        }
        return 0;
    }
}
}
