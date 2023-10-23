#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
int main() {
    char x = getch();

    if (x == -32) {
        printf("Extended key ");
        x = getch();
        switch (x) {
            case 71:
                printf("HOME");
                break;
            case 79:
                printf("END");
                break;
            case 75:
                printf("LEFT ARROW");
                break;
            case 77:
                printf("RIGHT ARROW");
                break;
            default:
                printf("Unknown extended key: %d", x);
        }
    } else {
        printf("Normal key %c", x);
    }

    return 0;
}
