#include<stdio.h>
void main()
{
    int d;
    printf("Enter the year:");
    scanf("%d",&d);
    (d%4==0)?printf("leap"):printf("not leap");
}
