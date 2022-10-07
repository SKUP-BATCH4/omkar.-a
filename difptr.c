#include<stdio.h>
int main()
{

    void *ptr;
    int a=5;
    float b=2.5;
    char c='a';
    ptr=&a;
    printf("%d\n",*(int*)ptr);
    ptr=&b;
    printf("%f\n",*(float*)ptr);
    ptr=&c;
    printf("%c\n",*(char*)ptr);
}
