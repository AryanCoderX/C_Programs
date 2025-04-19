#include<stdio.h>
void main()
{
    int row;
    printf("Enter row of 2D array\n");
    scanf("%d",&row);

    int col;
    printf("Enter col of 2D array\n");
    scanf("%d",&col);

    int ar[row][col];
    printf("Enter terms of array\n");

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        scanf("%d",&ar[i][j]);
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        printf("%d \t",ar[i][j]);

        printf("\n");
    }
}