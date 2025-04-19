#include<stdio.h>
void main()
{
    int *arr, n;
    printf("Enter size of array\n");
    scanf("%d",&n);

    int *p=arr;

    for(int i=0;i<n;i++)
    {
        printf("Enter value of %d index ",i);
        scanf("%d",p+i);            
    }

    for(int i=0;i<n;i++)
    {
        printf("Value of %d index is %d",i,*(p+i));
        printf("\n");
    }
    
}