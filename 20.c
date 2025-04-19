#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0; j<n*2-1; j++)
        {
            int a=n;
            if(i==0||j==0||j==(n*2-2))
            printf("%d ",n);
            else if(j==i)
            {
                for(;j<=n*2-i-2;j++)
                {
                    printf("%d",n-j);  
                }
                j--;
                a=n-i;
            }
            else if(j<n)
            printf("%d",n-j);
            else if(j>n)
            {
                a++;    
                printf("%d",a);
            }
        }
        
    }
    
    // for(int i=0;i<n;i++)
    // {
    //     printf("\n");
    //     for(int j=0; j<n*2-1; j++)
    //     {
    //         int a=n;
    //         if(i==0||j==0||j==(n*2-2))
    //         printf("%d ",n);
    //         else if(j==i)
    //         {
    //             for(;j<=n*2-i-2;j++)
    //             {
    //                 printf("%d",n-j);  
    //             }
    //             j--;
    //             a=n-i;
    //         }
    //         else if(j<n)
    //         printf("%d",n-j);
    //         else if(j>n)
    //         {
    //             a++;    
    //             printf("%d",a);
    //         }
    //     }
        
    // }
}