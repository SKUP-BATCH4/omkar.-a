#include<stdio.h>
void main()
{
    int i;
    int arr[3];
    printf("Enter values:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]==6 || arr[2]==6)
    {
       printf("True") ;
    }
    else
    {
        printf("False") ;
    }
}
