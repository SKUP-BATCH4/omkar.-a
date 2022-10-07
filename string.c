#include<stdio.h>
void main()
{
    char name[50],em[20],add[30],dob[10];
    int mn[10];
    printf("Enter name:");
    gets(name);
    printf("Enter DOB:");
    gets(dob);
    printf("Enter email:");
    gets(em);
    printf("Enter address:");
    gets(add);
    printf("Enter Mobile no:");
    scanf("%d",&mn);
    printf("------Personal details------\n");
    printf("Name:");
    puts(name);
    printf("DOB:");
    puts(dob);
    printf("Email:");
    puts(em);
    printf("Address:");
    puts(add);
    printf("Mobile no:");
    printf("%d",mn);


}
