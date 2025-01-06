#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int a,b;
    printf("Enter the string :\n");
    gets(s1);
    printf("What would you wish to perform \n 1. Copy string \n 2. Concatenation of string \n 3.Compare Strings \n 4. Length of the string\n 5. Reverse the string \n");
    scanf("%d",&a);

    switch(a)
    {
        case 1: printf("Enter the target string\n");
                 scanf("%s",s2);
                strcpy(s2,s1);
                printf("Copied String %s \n",s2);
                break;
        case 2: printf("Enter the string you want to concatenate\n");
                scanf("%s",s2);
                strcat(s1,s2);
                printf("Concatenated string is %s",s1);
                break;
        case 3: printf("Enter the string with which you want to compare\n");
                 scanf("%s",s2);
                b=strcmp(s1,s2);
                printf("String comparison %d",b);
                break;
        case 4: printf("Length of the string is %d\n", strlen(s1));
                break;
        case 5: printf("Reversed stirng is %s\n", strrev(s1));
                break;
        default : printf("Invalid option!!\n");
    }
    return 0;

    


    }
