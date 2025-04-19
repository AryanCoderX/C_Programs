#include <stdio.h>

//how to find address 


int main() {

    int i=800;
    char *ptr;

    ptr= (char*)&i;

    printf("\n\n\t *(ptr+3)=%d   *(ptr+2)=%d   *(ptr+1)=%d     *(ptr)=%d",*(ptr+3),*(ptr+2),*(ptr+1),*(ptr) );
    
    printf("\n\n\t &i=%x i=%d   ptr=%x &ptr=%x *ptr=%d",&i,i,ptr,&ptr,*ptr);
       
    return 0;
}