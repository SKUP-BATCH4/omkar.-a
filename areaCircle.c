#include<stdio.h>
#define PI 3.142
float areaCircle(float r)
{
    return PI*r*r;
}
float circumCircle(float r)
{
    return 2*PI*r;
}
void main()
{
    float a;
    printf("Enter radius:");
    scanf("%f",&a);
    printf("Area of circle: %f\n",areaCircle(a));
    printf("Circumference of circle: %f",circumCircle(a));
}
