#include<stdio.h>

int strlenc(char *a)
{
    int count=0;
    for(;a[count]!='\0';count++);
    return count;
}




void main()
{
   char str1[]="Aryan";
   int a=0,b=(strlenc(str1)-1);

   while (b>a)
   {
    char c= str1[a];
    str1[a]=str1[b];
    str1[b]= c;

    a++;
    b--;
   }
  
  printf("reverse of string: %s",str1);
}
