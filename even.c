#include<stdio.h>
int prime(int a)
{
    if(a==2||a==3||a==5||a==7)
    {
        return 1;
    }
    else if(a%2==0||a%3==0||a%5==0||a%7==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a;
    printf("enter the int:");
    scanf("%d",&a);
    printf("%d",prime(a));
}
