#include<stdio.h>
void main()
{
    
   FILE *ptr;
   ptr= fopen("integer.txt", "r");

   int a,b,c;

   fscanf(ptr, "%d", &a);
   fscanf(ptr, "%d", &b);
   fscanf(ptr, "%d", &c);
   
   printf("%d \n %d \n%d \n",a,b,c);

   fclose(ptr);
 
}