#include<stdio.h>
int lastDigit(int d)
{
    int a;
    a=d/10;
    return a;
}
void main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d",lastDigit(a));
}
