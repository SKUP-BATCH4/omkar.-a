#include<stdio.h>
#include<stdbool.h>
bool a1(int a[5])
{
    if(a[0]==6)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool a2()
{
    int a[5];
    printf("\nenter the value:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]==6)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void a3(int a[5])
{
    if(a[0]==6)
    {
        printf("\ntrue");
    }
    else
    {
        printf("\nfalse");
    }
}
void a4()
{
    int a[5];
    printf("\nenter the value:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]==6)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
int main()
{
    int a[5];
    printf("enter the value:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a1(a));
    printf("%d",a2());
    a3(a);
    a4();
}



