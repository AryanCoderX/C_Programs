#include<stdio.h>
int mystrlen(char *string)
{
    int count=0;
    for(;string[count]!='\0';count++);
    return count-1;//because fget will take enter as a character
}
void main()
{
    char *name;

    printf("Enter Your string ");
    fgets(name,100,stdin);

    printf("Length of string is %d",mystrlen(name));

}
