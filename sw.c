#include<stdio.h>
void main()
{
    int a,b;
    char c;
    printf("Enter the operator:");
    scanf("%c",&c);
    printf("Enter to integer:");
    scanf("%d%d",&a,&b);
    switch(c)
    {
        case '+': printf("%d",a+b);
                break;
        case '-': printf("%d",a-b);
                break;
        case '*': printf("%d",a*b);
                break;
        case '/': printf("%d",a/b);
                break;
        case '%': printf("%d",a%b);
                break;
        default: printf("Invalid Operator");
                break;
    }
}
