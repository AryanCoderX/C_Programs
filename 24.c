#include<stdio.h>
void main()
{
    
   FILE *ptr;
    char ch[100];

   ptr=fopen("new.txt","r");
   if(ptr== NULL)
   printf("The file was not found");
   
   
   fscanf(ptr,"%s", &ch);
   printf("My name is :%s",ch);
   
   fclose(ptr);
 
}