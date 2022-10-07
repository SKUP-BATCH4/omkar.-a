#include<stdio.h>
void main()
{
    int a1[3],a2[3];
    int i;
    printf("enter number:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a1[i]);
    }
    a2[0]=a1[2];
    a2[1]=a1[1];
    a2[2]=a1[0];
    for(i=0;i<3;i++)
    {
        printf("%d",a2[i]);
    }
}
