#include<stdio.h>
void main()
{
    
   FILE *ptr;
    ptr= fopen("table.txt", "r");

    int a;
    fscanf(ptr,"%d", &a);

    fclose(ptr);



   ptr= fopen("table.txt", "w");

    for(int i=1; i<=10; i++)
    {
        fprintf(ptr,"%d \n",a*i);
        
    }

   fclose(ptr);
 
}