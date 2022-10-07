#include<stdio.h>
int prime(int a)
{
    for(int j=1;j<=a;j++){
    int i,count=0;
    for(i=1;i<=j;i++)
    {
        if(j%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d\n",j);
    }
    }
}
int main()
{
    int a;
    printf("enter range:");
    scanf("%d",&a);
    prime(a);

}

