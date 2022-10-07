#include<stdio.h>
int main()
{
    int i,a[5],*p[5];
    printf("Enter number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        p[i]=&a[i];
        printf("%d\t",*p[i]);
    }

}
