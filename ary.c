#include<stdio.h>
void main()
{
    int i;
    char arr[10];

    printf("Enter values:");
    for(i=0;i<5;i++)
    {
        scanf("%c",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%c\t",arr[i]);
    }

}
