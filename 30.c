#include<stdio.h>


int strlenc(char *a)
{
    int count=0;
    for(;a[count]!='\0';count++);
    return count;
}

void main()
{
   char str1[]="MOM";
   int a=0,b=(strlenc(str1)-1);

   while (b>a)
   {
        if(str1[a]!=str1[b])
        {
            printf("Not a Palindrome Array");
            return;
        }
    a++;
    b--;
   }
  printf("Palindrome Array");
}
