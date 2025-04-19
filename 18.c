#include <stdio.h>
void main()
{
    FILE *fptr;
    fptr = fopen("new.txt", "a");

    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c\n", ch);

    fprintf(fptr, "%c", ' ');
    fprintf(fptr, "%c", 'K');
    fprintf(fptr, "%c", 'e');
    fprintf(fptr, "%c", 's');
    fprintf(fptr, "%c", 'h');
    fprintf(fptr, "%c", 'r');
    fprintf(fptr, "%c", 'i');
    fclose(fptr);
}
