
#include <stdio.h>
#include <stdlib.h>


void swap1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap2(int *a , int *b){
*a =*a+*b;
*b=*a-*b;
*a=*a-*b;
}
void swap3(int *a,int*b){
    *a= *a * *b;
    *b= *a / *b;
    *a = *a / *b;
}

int main() {
/*
    int x = 5;
    int y = 6;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap1(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
*/
/*

*/
    int x = 5;
    int y = 6;
    printf("Before swapping x = %d, y = %d\n", x, y);
    swap3(&x, &y);
    printf("After swapping x = %d, y = %d\n", x, y);
    return 0;
}

