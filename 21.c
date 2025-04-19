#include<stdio.h>
int main() {

    int size = 5;

    int pattern[5][5];

 

    // Initialize the pattern matrix

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            pattern[i][j] = 5; 

        }

    }

 

   

    pattern[1][1] = 2;

    pattern[1][2] = 2;

    pattern[1][3] = 2;

    pattern[2][1] = 2;

    pattern[2][3] = 2;

    pattern[3][1] = 2;

    pattern[3][2] = 2;

    pattern[3][3] = 2;

    pattern[2][2] = 1; 

 

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            printf("%d", pattern[i][j]);

        }

        printf("\n");

    }

 

    return 0;

}