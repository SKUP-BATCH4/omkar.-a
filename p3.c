#include<stdio.h>
int acc(int);
int main()
{
    int n=5;
    int a[]={2,3,5,6,4};
    printf("%d",acc(n));
}
int acc(int n)
{
    int a[5];
    int b=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<n;j++)
        {
            if(a[i]<a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
                return a;
}
