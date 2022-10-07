#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int s;
    int (*p)(int,int)=sum;
    s=(*p)(5,3);
    printf("%d",s);
}
