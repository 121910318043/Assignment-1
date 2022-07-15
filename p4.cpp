#include<stdio.h>
int main()
{
    float a,r;
    printf("Enter Radius of the Circle: ");
    scanf("%f",&r);
    a=r*r*(3.14);
    printf("Area of circle is %f having radius %f",a,r);
}
