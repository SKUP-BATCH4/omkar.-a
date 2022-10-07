#include<stdio.h>
int add(int  m)
{
    int sum=0,last;
    while(m!=0)
    {
        last =m%10;
        m=m/10;
        sum=sum+fac(last);


    }
    return sum;
}

int fac(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}

void main()
{
    int b;
    scanf("%d",&b);
    int c=add(b);
    if(b==c)
        printf("strong number");
    else
        printf("NOT strong number");

}
