
#include<stdio.h>
int main()
{
    int n;
    printf("enter the no of message:");
    scanf("%d",&n);
    int a[n];

    printf("enter the message:");
    for(int i=0;i<n;i++)
    {
        scanf("%x",&a[i]);
    }
    int can(int a[],int n)
    {
        for(int i=0;i<n;i++)
        {
            while(a[i]!=0)
            {
                int last =a[i]%10;
            }
        }









