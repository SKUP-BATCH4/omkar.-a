#include<stdio.h>
void main()
{
    int t;
    printf("Enter the room temperature:");
    scanf("%d",&t);
    if(t<=24)
    {
        printf("Low");
    }
    else if(t>=25&&t<=30)
    {
        printf("Normal");
    }
    else
    {
        printf("High");
    }
}
