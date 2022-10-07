#include<stdio.h>
void main()
{
    int c;
    printf("Enter the Marks:");
    scanf("%d",&c);
    switch(c)
    {
        case 0 ... 34:printf("fail");
                break;
        case 35 ... 59: printf("pass");
                break;
        case 60 ... 74: printf("first class");
                break;
        case 75 ... 100: printf("Distinction");
                break;
        default: printf("Invalid input");
                break;
    }
}
