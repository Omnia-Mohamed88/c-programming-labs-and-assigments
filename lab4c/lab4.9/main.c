#include <stdio.h>

int stringLength(const char str[]) {
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    return length;
}

int main() {
    char myString[] = "Hello, World!";
    int length = stringLength(myString);

    printf("Length of the string: %d\n", length);

    return 0;
}
