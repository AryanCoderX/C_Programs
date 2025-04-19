#include<stdio.h>

struct address
    {
        int houseNo;
        int block;
        char city[50];
        char state[50];
        
    };

void main()
{
    struct address house[5];
    for(int i=0;i<2;i++)
    {
        printf("Enter details of %dth person",i+1);
        printf("\nEnter house no ");
        scanf("%d",&house[i].houseNo);
        printf("\nEnter block no ");
        scanf("%d",&house[i].block);
        printf("\nEnter city name ");
        getchar();
        gets(house[i].city); 
        printf("\nEnter state name ");
        getchar();
        gets(house[i].state);
    }

    for(int i=0;i<2;i++)
    {
        printf("\nDetails of %d st person",i+1);
        printf("\nhouse no=%d",house[i].houseNo);
        printf("\nBlock no=%d",house[i].block);
        printf("\nCity=%s",house[i].city);
        printf("\nState=%d",house[i].state);
    }
}