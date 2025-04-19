#include<stdio.h>
#include<string.h>
void main()
{
    char name[50];

    printf("Enter Your name ");
    gets(name);

    int count=strlen(name);
    

    printf("Length of name is %d",count);

}