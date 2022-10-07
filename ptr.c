#include<stdio.h>
int main()
{

    int a;
    float b;
    char c;
    int * ptr1=&a;
    float * ptr2=&b;
    char * ptr3=&c;
    scanf("%c%f%d",&c,&b,&a);
    printf("%x,%x,%x\n",ptr3,ptr2,ptr1);
    printf("%c,%f,%d",*ptr3,*ptr2,*ptr1);
}
