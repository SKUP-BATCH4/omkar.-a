#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);


}

void swap(int *o,int *r)
{
//    int *o=&a;
//    int *r=&b;
    int temp;
    temp=(*o);
    (*o)=(*r);
    (*r)=temp;
    printf("%d %d",*o,*r);
}
