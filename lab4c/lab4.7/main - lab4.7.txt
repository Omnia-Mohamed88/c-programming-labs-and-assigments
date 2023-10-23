#include <stdio.h>
#include <stdlib.h>


int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        char currentChar = str[i];
        int repeated = 0;

        if (currentChar != '\0') {
            for (int j = i + 1; j < length; j++) {
                if (str[j] == currentChar) {
                    repeated = 1;
                    str[j] = '\0';
                }
            }

            if (repeated) {
                printf("'%c' is a repeated character.\n", currentChar);
            }
        }
    }

    return 0;
}
