#include<stdio.h>
void main()

{
    int a[3],sum=0,avrg,i;
    printf("enter the value:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avrg=sum/3;
    printf("%d\n %d",sum,avrg);
}
