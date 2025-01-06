#include<stdio.h>
#define PI 3.14159
int main()
{
    float a,r;
    printf("Enter the radius of the circle :\n");
    scanf("%f",&r);
    a= PI*r*r;
    printf("The are of the circle is %.3f\n",a);
    return 0;
}