#include <stdio.h>
#include <stdlib.h>


int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size");
        return 1;
    }

    int arr[size];

    printf("Enter elements:\n");
    int i ;
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    if (size == 1) {
        printf("Minimum and maximum value is %d\n", arr[0]);
    }
    else {
        int min = arr[0];
        int max = arr[0];

        for (i = 1; i < size; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        printf("Minimum value is %d\n", min);
        printf("Maximum value is %d\n", max);
    }

    return 0;

}
