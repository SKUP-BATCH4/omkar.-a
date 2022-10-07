#include<stdio.h>
void main()
{
    char ch1[20]="hello";
    char ch2[20]="hello";
    printf("%d\n",strlen(ch1));
    printf("%d\n",strcmp(ch1,ch2));
    strcpy(ch1,ch2);
    puts(ch1);
    strcat(ch1,ch2);
    puts(ch1);
    strlwr(ch1);
    puts(ch1);
    strupr(ch1);
    puts(ch1);
    strrev(ch1);
    puts(ch1);

}
