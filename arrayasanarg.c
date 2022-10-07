#include<stdio.h>
int avg(int[],int);
void main()
{
    int a,size;
    int marks[]={10,20,30,40,50,60,70,80,90,100};

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

