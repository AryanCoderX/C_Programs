#include<stdio.h>
void main()
{
    char name[50];

    printf("Enter Your name ");
    //gets(name); but it is considered dangerous
    fgets(name,50,stdin);// it gives a next line after printing

    printf("your name is ");
    puts(name);
   
}