#include<stdio.h>
int main()
{
    int n,a;
    printf("enter number:");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        printf("%d",a);
    }

}
