

#include <stdio.h>
#include <string.h>

void removeNonAlphabets(char str[]) {
    int i, j=0;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char myString[] = "Hello, 123 World!";

    removeNonAlphabets(myString);

    printf("Modified string: %s\n", myString);

    return 0;
}

