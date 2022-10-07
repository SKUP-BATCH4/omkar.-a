#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b||b==c||c==a)
    {
        printf("common");

    }
    else
    {
        printf("not common");
    }
}
