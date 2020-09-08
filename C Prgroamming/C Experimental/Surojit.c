#include <stdio.h>
void bubblesort(int a[], int n)
{
    int i, j, k, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        printf("Pass %d: ", i + 1);
        printf("\n");
        for (k = 0; k < n; k++)
        {
            printf("%3d", a[k]);
        }
        printf("\n");
    }
}

void selectionsort(int a[100], int n)
{
    int i, j, k, temp, index;
    for (i = 0; i < n; i++)
    {
        index = i;
        printf("Pass %d: ", i + 1);
        printf("\n");

        for (j = i + 1; j < n; j++)
        {
            if (a[index] > a[j])
            {
                index = j;
            }
        }
        temp = a[i];
        a[i] = a[index];
        a[index] = temp;
        for (k = 0; k < n; k++)
            printf("%3d", a[k]);
        printf("\n");
    }
}
void main()
{
    int choice, a[100], n, i;
    printf("Enter the number of elements to be sorted:");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\nMenu:");
        printf("\nPress 1 for bubble sort ");
        printf("\nPress 2 for selection sort");
        printf("\nPress 3 for exit");
        printf("\nEnter your number: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            bubblesort(a, n);
            printf("The sorted array is: ");
            for (i = 0; i < n; i++)
            {
                printf("%4d", a[i]);
            }
            printf("\nBubble sort is executed");
            break;
        case 2:
            selectionsort(a, n);
            printf("The sorted array is : ");
            for (i = 0; i < n; i++)
            {
                printf("%4d", a[i]);
            }
            printf("\nSelection sort is implemented");
            break;
        case 3:
            printf("Exit");
            break;
        default:
            printf("Please enter valid number");
            break;
        }
    } while (choice != 3);
}