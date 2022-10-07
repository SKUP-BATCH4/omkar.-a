#include<stdio.h>
void main()
{
    int ar[2][2][2];
    int i,j,k;
    printf("enter number:\n");
    for(k=0;k<2;k++)
    {
        scanf("%d",&ar[1][1][k]);
    }
    printf("array number:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d\t",ar[i][j][k]);
            }
        }
        printf("\n");
    }
}
