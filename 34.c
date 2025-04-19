#include<stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a= *b;
    *b= temp;
}

void main()
{
   int a[6];
   for(int i=0; i<6; i++)
    scanf("%d",&a[i]);

   for(int i=0; i<6; i++)
    {
        int ischeck= 0;
        for(int j=0; j<6-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                ischeck=1;
            }
        }
        if(!ischeck)
        break;
    }
    printf("After selction sorting\n");
    for(int i=0; i<6; i++)
    printf("%d\n",a[i]);
}
