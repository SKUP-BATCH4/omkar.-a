#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    spy(a);
}
int spy(int n)
{
    int r,s=0,p=1;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
        p=p*r;
    }
    if(s==p)
    {
        printf("spy");
    }
    else
    {
        printf("not spy");
    }
}
