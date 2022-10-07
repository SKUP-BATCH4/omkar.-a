#include<stdio.h>
int main()
{
    int a,q;
    printf("Enter number:");
    scanf("%d",&a);
    q=a/2;
    if(q*2==a)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

}
