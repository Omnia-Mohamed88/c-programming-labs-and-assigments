#include <stdio.h>
#include <stdlib.h>


int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("String in capital case: %s\n", str);

    return 0;
}
