#include <stdio.h>

int linear(int a[], int n, int call)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==call)
        {
            printf("Element %d found at location %d  \n\n\n\n",call,i+1);
            break;
        }
    }
    if(i==n)
        printf("Element not found in the array  \n\n\n\n");
}

int binary(int a[], int n, int call, int first, int last, int middle)
{
    first = 0;
    last = n-1;
    middle = (first + last)/2;
    while(first <= last)
    {
        if(a[middle]<call)
        {
            first = middle+1;
        }
        else if (a[middle]==call)
        {
            printf("Element %d is found at location %d  \n",call,middle+1);
            break;
        }
        else
        {
            last = middle-1;
            middle = (first + last)/2;
        }
    }
}

int main()
{
    int search=0,a[100],n,i,call,first,last,middle;
    printf("Enter the number of elements you wish to enter");
    scanf("%d",&n);
    printf("Enter the elements\n\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search");
    scanf("%d",&call);

    while(search !=3)
    {

        printf("Enter the option between 1,2 and 3 to choose a searching method\n");
        printf("1: Linear search\n");
        printf("2: binary search\n");
        printf("3: exit\n");
        scanf("%d",&search);
        switch(search)
        {
        case 1 :
            printf("Linear search is executed\n\n\n\n");
            linear(a,n,call);
            break;
        case 2 :
            printf("Binary search is executed\n\n\n\n");
            binary(a,n,call,first,last,middle);
            break;
        case 3 :
            printf("Exit\n\n\n\n");
            break;
        default :
            printf("This option does not exist\n");
            break;
        }
    }
    return 0;
}













