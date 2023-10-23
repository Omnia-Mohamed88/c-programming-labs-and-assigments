#include <stdio.h>

void copyString(char dest[], const char src[]) {
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    copyString(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
