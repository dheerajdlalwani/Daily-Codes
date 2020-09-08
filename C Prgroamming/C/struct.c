
#include<stdio.h>
struct pcm
{
    int p,c,m,total;
};
struct student
{
    char name[20];
    int roll;
    struct pcm marks;
};
void sort(struct student s[40],int n)
{
    int i,j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(s[j].marks.total<s[j+1].marks.total)
            {
                temp=s[j].marks.total;
                s[j].marks.total=s[j+1].marks.total;
                s[j+1].marks.total=temp;
            }
        }
    }
}
void main()
{
    struct student s[40];
    int i,j,n;

    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter details of student %d ",i+1);
        scanf("%s%d%d%d%d",s[i].name,&s[i].roll,&s[i].marks.p,&s[i].marks.c,&s[i].marks.m);
        s[i].marks.total=s[i].marks.p+s[i].marks.c+s[i].marks.m;
    }
    sort(s,n);
    printf("\nSorted list: ");
    for(i=0; i<n; i++)
    {
        printf("\nName: %s\t Roll no: %d\t Total: %d\t",s[i].name,s[i].roll,s[i].marks.total);
    }
}
