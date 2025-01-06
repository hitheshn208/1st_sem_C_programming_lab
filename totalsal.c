#include<stdio.h>
#define TAX_RATE 8.5
int main()
{
    float quant,unitp,discrat,discamt,subtotal,subtaxable,taxamt,gtotal;

    printf("Enter the number of items sold \n");
    scanf("%f",&quant);
    printf("Enter the unit price \n");
    scanf("%f",&unitp);
    printf("Enter the Discount rate (percentage) \n");
    scanf("%f",&discrat);

    subtotal = quant * unitp;
    discamt = subtotal * discrat/100;
    subtaxable = subtotal - discamt;
    taxamt = subtaxable * TAX_RATE/100;
    gtotal = subtaxable + taxamt;

    printf("Number of items sold : %d\n",(int)quant);
    printf("Unit price           : %.2f\n",unitp);
    printf("--------------------------------\n");
    printf("Subtotal             : %.2f\n",subtotal);
    printf("Discount Amount      : -%.2f\n",discamt);
    printf("Sales tax            : +%.2f\n",taxamt);
    printf("Grand total          : %.2f\n",gtotal);

    return 0;
    
    }