#include <stdio.h>
#include <conio.h>
#include <windows.h>

void setColor(int text, int background) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), background * 16 + text);
}

void display(char menuItems[3][10], int selectedIndex) {
    system("cls");

    for (int i = 0; i < 3; i++) {
        if (i == selectedIndex) {
            setColor(12, 0);
            printf("-> %s\n", menuItems[i]);
        } else {
            setColor(15, 0);
            printf("   %s\n", menuItems[i]);
        }
    }
}

int main() {
    char menuItems[3][10] = {"New", "Display", "Exit"};
    int selectedIndex = 0;

    while (1) {
        display(menuItems, selectedIndex);
        int key = getch();

        if (key == 13) {
            if (selectedIndex == 0) {
                system("cls");
                printf("Selected: New\n");
                printf("Press any key to continue...");
                getch();
            } else if (selectedIndex == 1) {
                system("cls");
                printf("Selected: Display\n");
                printf("Press any key to continue...");
                getch();
            } else if (selectedIndex == 2) {
                system("cls");
                printf("Selected: Exit\n");
                break;
            }
        } else if (key == 72 && selectedIndex > 0) {
            selectedIndex--;}
        else if(key==72 && selectedIndex==0){
            selectedIndex=2;
        }
        else if (key == 80 && selectedIndex < 2) {
            selectedIndex++;
        }
        else if(key==80 &&selectedIndex==2){
            selectedIndex=0;
        }
    }

    return 0;
}

