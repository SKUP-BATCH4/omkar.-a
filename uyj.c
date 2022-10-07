#include<stdio.h>
void main()
{
    int *ptr,*ptr1;
    ptr=(int*)malloc(sizeof(int));
    ptr1=(void*)realloc(ptr,sizeof (int));
    scanf("%d",ptr);
    scanf("%d",ptr1);
    printf("%d",ptr1);

}
