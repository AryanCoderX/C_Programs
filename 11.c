#include<stdio.h>
void main()
{
    char name[50];

    printf("Enter Your name ");
    gets(name);

    int count=0;
    for(;name[count]!='\0';count++);

    printf("Length of name is %d",count);

}