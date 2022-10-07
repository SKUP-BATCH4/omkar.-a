#include<stdio.h>
struct marr
{
    char hname[20],wname[20];
    char mdate[10];
    int kids;
};

void main()
{
    int n;
    printf("Enetr the no. of people : ");
    scanf("%d",&n);
    struct marr s[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the husband name, wife name, marriage date, no. of kids : ");
        scanf("%s %s %s %d",&s[i].hname,&s[i].wname,&s[i].mdate,&s[i].kids);
    }
    printf("\n\n The details of marriage peoples are :\n");

    for(int i=0;i<n;i++)
    {
        printf("\n--------------------------------------------------\n");
        printf("husband name : %s\n wife name: %s\n marriage date : %s\n no. of kids : %d\n",s[i].hname,s[i].wname,s[i].mdate,s[i].kids);
    }
}

