#include<stdio.h>
int main()
{
    int b,a[]={12,7,5,6,8};
    int*ptr=&a[1];
    int *ptr1=&a[3];
    //printf("%d\n",*ptr);
    b=ptr1-ptr;
    printf("%d",b);
}

