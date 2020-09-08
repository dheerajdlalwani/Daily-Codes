#include <stdio.h>

// kms to miles
// inches to foot
// pounds to kgs
// inch to metre
void km()
{
    float i, miles;
    printf("Enter the value in Km\n");
    scanf("%f", &i);
    miles = i * (float)(0.621);
    printf("Value in miles is %f\n", miles);
}

void inch()
{
    float i, foot;
    printf("Enter the value in inch\n");
    scanf("%f", &i);
    foot = i * (float)(0.0833);
    printf("Value in feet is %f\n", foot);
}

void pound()
{
    float i, kg;
    printf("Enter the value in pound \n");
    scanf("%f", &i);
    kg = i * (float)(0.454);
    printf("Value in kg is %f\n", kg);
}

void meter()
{
    float i, meter;
    printf("Enter the value in inch \n");
    scanf("%f", &i);
    meter = i * (float)(0.0254);
    printf("Value in meter is %f\n", meter);
}

int main()
{
    int choice;
    choice = 0;

    while (choice != 5)
    {
        printf("Enter the option from the following\n");
        printf("(1)km to mile, (2)inch to foot, (3) pound to kg, (4)inch to metre, (5)Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("km to mile is selected\n");
            km();
            break;

        case 2:
            printf("inch to foot is selected\n");
            inch();
            break;

        case 3:
            printf("pound to kg is selected\n");
            pound();
            break;

        case 4:
            printf("inch to metre is selected\n");
            meter();
            break;

        case 5:
            printf("Exit\n");
            break;

        default:
            printf("Invalid option\n");
            break;
        }
    }

    return 0;
}
