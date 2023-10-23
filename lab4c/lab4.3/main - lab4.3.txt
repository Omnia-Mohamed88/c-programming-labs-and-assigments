#include <stdio.h>
#include <stdlib.h>

int main()
{   char array[100];
    printf("please enter statment ");
    scanf("%[^\n]",array);
    printf("the statment is %s\n",array);
    return 0;
}
