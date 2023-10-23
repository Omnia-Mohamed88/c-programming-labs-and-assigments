#include <stdio.h>
#include <math.h>

void printCube(int num) {
    long long int cube = pow(num, 3);
    printf("The cube of %d is %lld\n", num, cube);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printCube(number);

    return 0;
}


