#include <stdio.h>
#include <conio.h>
#include <windows.h>
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

void display(char menuItems[3][10], int selectedIndex) {
    system("cls");
    int initialX = 14;
    int initialY = 9;
    for (int i = 0; i < 3; i++) {
        if (i == selectedIndex) {
            setColor(12, 0);
            gotoxy(initialX, initialY + i);

            printf("-> %s\n", menuItems[i]);
        } else {
            setColor(15, 0);
            gotoxy(initialX, initialY + i);

            printf("   %s\n", menuItems[i]);
        }
    }
}

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short int u16;
typedef signed short int s16;
typedef unsigned long int u32;
typedef signed long int s32;

struct student {
    u8 name[10];
    u8 gender;
    u8 age;
    s32 id;
};

int scan_struct_Students(struct student s[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter name [%d]: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter age [%d]: ", i + 1);
        scanf("%hhu", &s[i].age);
        printf("Enter ID [%d]: ", i + 1);
        scanf("%ld", &s[i].id);
        printf("Enter Gender [%d]: ", i + 1);
        scanf(" %c", &s[i].gender);

        printf("Student added. Press 'y' to stay on, or any other key to go back to the menu.\n");
        char key = getch();
        if (key != 'y' && key != 'Y') {
            break;
        }
    }
    return size;
}

int main() {
    char menuItems[3][10] = {"New", "Display", "Exit"};
    int selectedIndex = 0;
    int size = 0;
    int initialX = 14;
    int initialY = 9;
    int i = 0;
    struct student students[100];

    while (1) {
        display(menuItems, selectedIndex);
        int key = getch();

        if (key == 13) {
            if (selectedIndex == 0) {
                system("cls");
                gotoxy(initialX, initialY + i);

                printf("Please enter the size of students: ");
                scanf("%d", &size);
                if (size <= 0 || size > 100) {
                    printf("Invalid size. Press any key to continue...");
                    getch();
                } else {
                    scan_struct_Students(students, size);
                }
            } else if (selectedIndex == 1) {
                system("cls");
                printf("----------------- Display -------------------- \n");
                for (int i = 0; i < size; i++) {
                    printf("Name[%d]: %s \n", i + 1, students[i].name);
                    printf("Gender[%d]: %c \n", i + 1, students[i].gender);
                    printf("Age[%d]: %d \n", i + 1, students[i].age);
                    printf("ID[%d]: %ld \n", i + 1, students[i].id);
                }
                printf("Press any key to continue...");
                getch();
            } else if (selectedIndex == 2) {
                break;
            }
        } else if (key == 72 && selectedIndex > 0) {
            selectedIndex--;
        } else if (key == 80 && selectedIndex < 2) {
            selectedIndex++;
        }
    }

    return 0;
}
