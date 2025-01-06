#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s1[100] ,s2[100];
    printf("Enter the string s1 \n");
    gets(s1);
    printf("Enter the string s2 \n");
    gets(s2);

    for(i=0 ; s1[i]==s2[i] && s1[i]!='\0'; i++);

    if(s1[i]<s2[i])
    printf("The String s1 is lesser than s2 \n");
    else if(s1[i]>s2[i])
    printf("The String s2 is lesser than s1 \n");
    else
    printf("Strings are equal\n");

    return 0;

}