#include<stdio.h>
void main()
{
    char n[30],dob[10],p[20];
    int a,m;
    printf("----------BIO DATA----------\n");
    printf("Enter Your Name:");
    scanf("%s",&n);
    printf("Enter Your Age:");
    scanf("%d",&a);
    printf("Enter Your Mobile No:");
    scanf("%d",&m);
    printf("Enter Your DOB:");
    scanf("%s",&dob);
    printf("Enter Your Place:");
    scanf("%s",&p);
    printf("----------------------------\n");
    printf("Name:%s\n",n);
    printf("Age:%d\n",a);
    printf("Mobile no:%d\n",m);
    printf("DOB:%s\n",dob);
    printf("Place:%s\n",p);
    printf("----------------------------");
}
