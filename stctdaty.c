#include<stdio.h>
typedef struct student
{
    int id;
    char n[10];
    float marks;
}std;
void main()
{
    std a={2,"kiran",100.5};
    printf("%d %s %f",a.id,a.n,a.marks);
}

