#include<stdio.h>
#include<stdlib.h>



struct node
{
    int data;
    struct node *next;
};



display(struct node *head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}


struct node* front(struct node *head,int value)
{
    struct node *p;
    p=malloc(sizeof(struct node));
    p->data=value;
    p->next=head;
    return (p);
}

end(struct node *head,int value)
{
    struct node *p,*q;
    p=malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;
    q=head;
    while(q->next!=NULL)
    {
        q = q->next;
    }
    q->next = p;
}



after(struct node *a, int value)
{
    if (a->next != NULL)
    {
        struct node *p;
        p = malloc(sizeof(struct node));
        p->data = value;

        p->next = a->next;
        a->next = p;
    }
    else
    {
        printf("Use end function to insert at the end\n");
    }
}

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
            printf ("number of elements:");
            scanf("%d",&n);
            head=NULL;

            for(i=0;i<n;i++)
            {
                p=malloc(sizeof(struct node));
                scanf("%d",&p->data);
                p->next=NULL;
                if(head==NULL)
                    head=p;
                else
                    prev->next=p;
                prev=p;
            }
            head = front(head,10);
            end(head,20);
            after(head->next->next,30);

            break;

        case 2 :
            printf("Delete function is chosen\n");
            break;

        case 3 :
            printf("Display function is chosen\n");
            display(head);
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
