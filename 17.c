#include<stdio.h>
int mystrcmp(char string1[],char string2[])
{   
    int count=0;
    int i=0;
    for(;string1[count]!='\0',string1[count]!='\0';count++);
    for(;i<=count;i++);
    {
        if(string1[i] > string2[i])
        return 1;
        if(string1[i] < string2[i])
        return -1;
    }
    return 0;
}
void main()
{
    char *s1="aryan";
    char *s2="Aryan";
    
    printf("compare= %d",mystrcmp(s1,s2));
}
