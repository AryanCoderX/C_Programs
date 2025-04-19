#include<stdio.h>
void main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);

    int ar[n];
    printf("Enter %d terms of array",n);
    printf("\n");
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);

    int largest=ar[0];
    for(int i=1;i<n;i++)
    largest = largest>ar[i]?largest:ar[i];

    printf("Largest %d",largest);
}