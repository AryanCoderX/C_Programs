#include <stdio.h>


int main() {
    
    int n,sum=0;
    
    printf("Enter size of array ");
    scanf("%d",&n);
    int ar[n];
    for( int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]); 
        sum+=ar[i];
    }

    
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}