#include <stdio.h>
#include <stdlib.h>

int main()
{
//q1

int rows, cols;
    printf("Please enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Average of each column:\n");
    for (int j = 0; j < cols; j++) {
        float sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }
        float avg = sum / rows;
        printf("Column %d: %.2f\n", j + 1, avg);
    }




    return 0;
}
