#include<stdio.h>
void main()
{
    int i=1,n,sum=0;

    while(i<=10)
    {
        printf("\nEnter  the integer:");
        scanf("%d",&n);
         i++;
        if(n<0)
        {
            printf("negative value");
            continue;
        }
        else
        {
            sum=sum+n;
        }

    }
    printf("%d",sum);
}
