#include<stdio.h>
int fibonacci(int a)
{   
    if(a==0)
    return 0;
    else if(a==1)
    return 1;

     
    return fibonacci(a-1)+ fibonacci(a-2);
}
void main()
{
    int n=0;
    printf("enter the nth term to be found in the fibonacci series : ");
    scanf("%d",&n);
    
    printf("\n %dth term of fibonacci series is %d",n,fibonacci(n-1));
}
