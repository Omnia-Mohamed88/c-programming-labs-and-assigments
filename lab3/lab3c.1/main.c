
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void gotoxy(int x, int y) {
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int row, col, val;
    int size;

    printf("Enter the size of the magic square (odd number): ");
    scanf("%d", &size);

    if (size % 2 == 0) {
        printf("Please enter an odd number.\n");
    } else {
        row = 1;
        col = (size + 1) / 2;
        val = 1;

        do {
            gotoxy(col * 4, row * 2);

            printf("%3d", val);
            Sleep(500);

            if (val % size == 0) {
                row++;
            } else {
                row--;
                col--;
            }

            if (row == 0) {
                row = size;
            }
            if (col == 0) {
                col = size;
            }

            val++;
        } while (val <= size * size);
    }

    return 0;
}

