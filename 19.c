#include <stdio.h>
void main()
{
    FILE *fptr;
    fptr = fopen("odd.txt", "a");

    for(int i=1;i<50;i+=2)
    fprintf(fptr,"%d\n",i);
    fclose(fptr);
}
