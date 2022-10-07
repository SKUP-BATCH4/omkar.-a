#include<stdio.h>
void main()
{
    int a1[3];
    int i;
    printf("enter number:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a1[i]==2&&a1[i+1]==3)
            a1[i+1]=0;
            printf("%d",a1[i]);
    }
}
