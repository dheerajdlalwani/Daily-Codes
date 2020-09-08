#include <stdio.h>
void drawellipse(float height, float radius);
void drawconical(float minorradius, float majorradius);

void drawcone()
{
    float height, radius;
    drawellipse(height, radius);

    printf("The height of cone is located at %x\n", &height);
    printf("The radius of cone is located at %x\n", &radius);
}

void drawellipse(float height, float radius)
{
    float minorradius, majorradius;

    printf("The address of minor radius is %x\n", &minorradius);
    printf("The address of major radius is %x\n", &majorradius);
}

void drawconical(float minorradius, float majorradius)
{
    int pt1, pt2;
    printf("The address of point 1 is %x\n", &pt1);
    printf("The address of point 2 is %x\n", &pt2);
}

void main()
{
    printf("Executing the drawcone function\n\n");
    drawcone();
}