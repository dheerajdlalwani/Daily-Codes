#include <stdio.h>

void bubblesort(int a[100], int n)
{
    int i, j, temp;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1 - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        printf("\nBubble sort Pass : %d : \n", j + 1);
        for (i = 0; i < n; i++)
            printf("%4d", a[i]);
    }
    printf("\nBubble sorted array : \n");
    for (i = 0; i < n; i++)
        printf("%4d", a[i]);
}

void selectionsort(int a[100], int n)
{
    int i, j, temp, k, minindex;
    for (i = 0; i < n; i++)
    {
        minindex = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[minindex] > a[j])
            {
                minindex = j;
            }
        }
        temp = a[i];
        a[i] = a[minindex];
        a[minindex] = temp;
        printf("\n Select sorted Pass %d : \n", i);
        for (j = 0; j < n; j++)
            printf("%4d", a[j]);
    }
    printf("\n Select sorted array : \n");
    for (i = 0; i < n; i++)
        printf("%4d", a[i]);
}

void main()
{
    int choice, a[100], i, b[100], n;
    printf("\nEnter the Number of terms to be put in array\n");
    scanf("%d", &n);
    printf("Enter %d values one by one\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    while (choice != 3)
    {
        printf("\nEnter the option between 1,2 and 3 to choose a sorting method\n");
        printf("1: Bubble Sort\n");
        printf("2: Selection Sort\n");
        printf("3: Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Binary Sort option is chosen\n");
            bubblesort(a, n);
            break;

        case 2:
            printf("Selection Sort option is chosen\n");
            selectionsort(b, n);
            break;

        case 3:
            printf("Exiting the Program\n");
            break;

        default:
            printf("Invalid option\n");
            break;
        }
    }
}
