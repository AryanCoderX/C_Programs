#include<stdio.h>
void main()
{
    for(int i=100;i<200;i++)
    {
        int check=0;
        for(int j=2; j*j<=i; j++)
          {  
            if(i%j==0)
                check++;
          }  
        if(check==0)
        printf("%d \n",i);
    }
}