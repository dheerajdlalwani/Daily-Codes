#include<stdio.h>
#include<stdlib.h>


struct ll_node
{
    int data;
    struct ll_node *next;
};


void main()
{
    int choice;
    struct node *prev,*head, *p;
    int n,i;

    while (choice !=4)
    {
        printf("\nEnter the option between 1,2 and 3 to choose a Linked List Function to be executed\n");
        printf("1: Insert\n");
        printf("2: Delete\n");
        printf("3: Display\n");
        printf("4: Exit");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1 :
            printf("Insert function is chosen\n");
            break;

        case 2 :
            printf("Delete function is chosen\n");
            break;

        case 3 :
            printf("Display function is chosen\n");
            break;

        case 4 :
            printf("Exiting the Program\n");
            break;

        default :
            printf("Invalid option\n");
            break;
        }
    }
}
