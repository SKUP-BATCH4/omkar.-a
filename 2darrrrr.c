#include<stdio.h>
void main()
{
    int ar[10][10];
    int i,j;

    printf("array number:");
    for(i=0;i<10;i++)//row
    {
        scanf("%d",&ar[i][9]);

    }
    for(i=0;i<10;i++)//row
    {
        for(j=0;j<9;j++)//column
        {
            ar[i][j]=0;
        }
    }

    for(i=0;i<10;i++)//row
    {
        for(j=0;j<10;j++)//column
        {
            printf("%d\t",ar[i][j]);
        }
        printf("\n");
    }
}
