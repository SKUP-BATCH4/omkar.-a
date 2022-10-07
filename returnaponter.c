#include<stdio.h>
int* msd(int []);
int main()
{
    int *ptr;int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ptr=msd(a);
    printf("%d\n",a);
    printf("%d\n",msd(a));
    printf("%d",*ptr);
}
int* msd(int b[])
{
    b=b+3;
    return b;
}
