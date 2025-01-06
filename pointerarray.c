#include<stdio.h>
#include<malloc.h>
int main()
{
    int i,n,sum=0;
    int *ptr;

    printf("Enter the size of the array\n");
    scanf("%d",&n);

    ptr=(int*)malloc(sizeof(int)*n);

    printf("Enter the elements into the array : \n");
    for(i=0 ; i<n ; i++)
        scanf("%d",ptr+i);

    for(i=0 ; i<n ; i++)
        sum=sum + *(ptr+i);

    printf("The sum of the elements in the array is %d",sum);

    return 0;
}