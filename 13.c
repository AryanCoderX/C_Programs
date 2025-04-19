#include<stdio.h>
void main()
{
    struct student
    {
        char name[50];
        int roll;
        float cgpa; 
    };
    
    struct student s1;
     printf("\nEnter your name ");
     gets(s1.name);
     printf("\nYour name is ");
     puts(s1.name);

     printf("\nEnter your roll number ");
     scanf("%d",&s1.roll);
    printf("\nYour roll number is %d",s1.roll);
    }