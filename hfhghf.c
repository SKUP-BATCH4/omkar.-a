#include<stdio.h>
int avg(int,int);
void main()
{
    int a,size;
    int marks[]={109,200,320,430,570};
    size=sizeof(marks)/sizeof(marks[0]);
    a = add(marks,size);
    printf("%d",a);
}
int add(int marks[],int a)
{
    int i ,sum=0;
    for (i=0;i<a;i++)
    {
        sum=sum+marks[i];
    }
    return sum;
}

