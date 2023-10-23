#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 15;
    int b = 4;
    int c = 2;

    int lmax = max(a, b);
    int rmax = max(lmax, c);

    printf("%d", rmax);

    return 0;
}

