#include<stdio.h>
int main()
{
    int a[100];
    int count=0;

    for(int i=1;i<100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
            break;
        count++;
    }
//    for(int i=0;i<sizeof(a)/4;i++)
//    {
//        count++;
//    }
    printf("elements : %d",count);


}
