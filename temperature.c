#include<stdio.h>
int main(){
    float f,n,c;
    printf("What would you like to do??\n1. Convert Celcius to Faranheit\n2. Convert Faranheit to celcius\n");
    scanf("%f",&n);

    if(n==1)
    {
        printf("Enter the temperature in celcius :\n");
        scanf("%f",&c);
        f=c*9/5+32;
        printf("The temperature in faranheit is %.2f\n",f);
    }
    else
    {
        printf("Enter the temperature in faranheit :\n");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("The temperature in celcius is %.2f\n",c);
    }

    return 0;
}