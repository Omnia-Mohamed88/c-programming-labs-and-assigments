#include <stdio.h>
#include <stdlib.h>

int main() {
    char firstName[50];
    char lastName[50];
    char fullName[100];

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    int i, j;
    for (i = 0; firstName[i] != '\0'; i++) {
        fullName[i] = firstName[i];
    }
    fullName[i] = ' ';
    i++;

    for (j = 0; lastName[j] != '\0'; j++) {
        fullName[i + j] = lastName[j];
    }
    fullName[i + j] = '\0';
    printf("Your full name is: %s\n", fullName);

    return 0;
}
