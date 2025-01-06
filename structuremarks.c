#include<stdio.h>

struct student
{
    int roll;
    float marks[3];
}s[3];

int main()
{
    int i,j;
    float subjectmarks[3]={0} , markssum=0;

    for(i=0 ; i<3 ; i++)
    {
        s[i].roll=i+1;
        printf("\nFor the student %d \n",s[i].roll);
        for(j=0;j<3;j++)
        {
            printf("Enter the subject %d marks ",j+1);
            scanf("%f",&s[i].marks[j]);
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        markssum=0;
        printf("Roll No. %d student \n",s[i].roll);
        for(j=0 ; j<3 ; j++)
        {
            printf("Subject %d mark %.2f\n",j+1,s[i].marks[j]);
            markssum=markssum+s[i].marks[j];
        }
        printf("Total Marks : %.2f\n\n",markssum);
    }

    for(i=0;i<3;i++)
    {
        subjectmarks[i]=s[1].marks[i]+s[2].marks[i]+s[2].marks[i];
        printf("Sum of the marks of Subject %d is %.2f\n",i+1,subjectmarks[i]);
    }

    return 0;
}