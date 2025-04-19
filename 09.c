#include<stdio.h>
void main()
{
    int marks[2][3];

    for(int i=0;i<2;i++)
    {
        printf("%d student \n",i+1);
        for(int j=0; j<3;j++)
        {
            printf("Enter marks of %d subject ",j+1);
            scanf("%d",&marks[i][j]);
        }               
    }


    for(int i=0;i<2;i++)
    {
        printf("%d student \n",i+1);
        for(int j=0; j<3;j++)
        {
            printf("Marks of %d subject %d ",j+1,marks[i][j]);
        }               
    }

}