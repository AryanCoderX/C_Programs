#include<stdio.h>

int strlenc(char *a)
{
    int count=0;
    for(;a[count]!='\0';count++);
    return count;
}

int strcmpc(char *a, char *b)
{
    
    for(int i=0;i< strlenc(a);i++)
    {
        if(a[i]==b[i])
        continue;
        else if(a[i]>b[i])
        return 1;
        else if(a[i]<b[i])
        return -1;
    }
    return 0;
}



void main()
{
   char *str1="Aryan";
   char *str2="Aryan";

   if(strlenc(str1)!=strlenc(str2))
   {
    printf("String are not equal");
    return;
   }
    
    printf("Compare : %d", strcmpc(str1,str2));
}
