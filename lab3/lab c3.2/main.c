
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main() {
int arr[SIZE]={0};
int size =0;
printf("enter size ");
scanf("%d" , &size);
int j;
for (j = 0; j < size; j++) {
        printf("Enter elemnts: ");
        scanf("%d", &arr[j]);
    }
for(j=0 ;j<size;j++){
    printf("Elements are %d \n" , arr[j]);
}

    return 0;
}
