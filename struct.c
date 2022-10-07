#include<stdio.h>
struct emp
{
    int id;
    char n[20];

};
void main()
{

    struct emp e1={101,"Kiran"};
    struct emp e2={102,"Omkar"};
    struct emp e3={103,"Vishal"};
    struct emp e4={104,"Sumant"};
    printf("%d %s\n",e1.id,e1.n);
    printf("%d %s\n",e2.id,e2.n);
    printf("%d %s\n",e3.id,e3.n);
    printf("%d %s\n",e4.id,e4.n);
}
