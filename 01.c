#include<stdio.h>
void main()
{
    printf("hello");
}


int largest(int ar[],int size)
{
    int a, largest=ar[0];
    for(int i=1;i<size;i++)
    {
        if(largest>ar[i])
        {
        largest=ar[i];
        a =i;
        }
    }
    return a;
}