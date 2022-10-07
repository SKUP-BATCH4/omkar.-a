#include<stdio.h>
struct std
{
    char name[20];
    int tm;
    float cgpa;
    char grade;
};

void main()
{
    int n;
    printf("Enetr the no. of students : ");
    scanf("%d",&n);
    struct std s[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the name,marks,cgpa,grade of student no.%d: ",i+1);
        scanf("%s %d %f %c",&s[i].name,&s[i].tm,&s[i].cgpa,&s[i].grade);
    }
    printf("\n\n The details of students\n");
    printf("name | marks | CGPA | grade\n");
    for(int i=0;i<n;i++)
    {

        printf("%s | %d | %.2f | %c \n",s[i].name,s[i].tm,s[i].cgpa,s[i].grade);
    }
}
