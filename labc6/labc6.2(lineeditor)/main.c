#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

void setColor(int text, int background) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), background * 16 + text);
}

void gotoxy(int x, int y) {
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    char line[100] = {0};
    char choice;
    int curr = 0, flag = 0;
    int inputSize = 0;

    printf("Type a line:\n");
    gotoxy(10, 0);

    while (flag == 0) {
        choice = getch();

        if (choice == 0 || choice == -32 || choice == 224) {
            choice = getch();
            switch (choice) {
                case 75: // Left
                    if (curr > 0) {
                        gotoxy(curr - 1, 10);
                        curr--;
                    }
                    break;
                case 77: // Right
                    if (curr < inputSize) {
                        gotoxy(curr + 1, 10);
                        curr++;
                    }
                    break;
                case 71: // Home
                    gotoxy(0, 10);
                    curr = 0;
                    break;
                case 79: // End
                    curr = inputSize;
                    gotoxy(curr, 10);
                    break;
            }
        } else {
            switch (choice) {
                case 13: // Enter
                    flag = 1;
                    break;
                case 27: // Esc
                    flag = 1;
                    break;
                case 8: // Backspace
                    if (curr > 0) {
                        for (int i = curr - 1; i < inputSize; i++) {
                            line[i] = line[i + 1];
                        }
                        inputSize--;
                        curr--;
                        gotoxy(curr, 10);
                        printf(" ");
                        gotoxy(curr, 10);
                        printf("%s", &line[curr]);
                    }
                    break;
                default:
                   if (inputSize < 99) {
                    line[curr] = choice; // Instead of inserting, replace the current character
                      curr++;
                     gotoxy(curr - 1, 10);
                       printf("%c", line[curr - 1]);
                       }

                    break;
            }
        }
    }

    printf("\nYou entered: %s\n", line);

    return 0;
}






