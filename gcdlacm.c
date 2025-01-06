#include<stdio.h>
void gcdlcm(int n1, int n2)
{
    int gcd, lcm , nume, deno , remain ;

    if(n1>n2)
    {
        nume=n1;
        deno= n2;
    }
    else
    {
        nume=n2;
        deno=n1;
    }
    remain=nume%deno;

    while(remain!=0)
    {
        nume=deno;
        deno=remain;
        remain=nume%deno;
    }
    gcd=deno;
    lcm=(n1*n2)/gcd;

    printf("The GCD of the numbers is %d\n",gcd);
    printf("The LCM of the numbers is %d",lcm);
    
}
int main()
{
    int n1,n2;
    printf("Enter the number n1 \n");
    scanf("%d",&n1);
    printf("Enter the number n2 \n");
    scanf("%d",&n2);

    gcdlcm(n1,n2);
    return 0;
}
