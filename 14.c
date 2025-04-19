#include<stdio.h>
void main()
{
    struct student
    {
        char name[50];
        int roll;
    };
    
    struct student s1;
     printf("\nEnter Student 1 name ");
     gets(s1.name);    
     printf("\nEnter Student 1 roll number ");
     scanf("%d",&s1.roll);
     getchar();
    
    struct student s2;
     printf("\nEnter Student 2 name ");
     gets(s2.name);    
     printf("\nEnter Student 2 roll number ");
     scanf("%d",&s2.roll);
     getchar();
     
     struct student s3;
     printf("\nEnter Student 3 name ");
     gets(s3.name);    
     printf("\nEnter Student 3 roll number ");
     scanf("%d",&s3.roll);
     getchar();


    printf("\nEvery one's name");
     puts(s1.name);
     puts(s2.name);
     puts(s3.name);

     printf("\nEvery one's roll number");
     printf("\n%d",s1.roll);
     printf("\n%d",s2.roll);
     printf("\n%d",s3.roll);
}