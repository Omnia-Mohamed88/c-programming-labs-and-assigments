#include <stdio.h>
#include <stdlib.h>

int main()
{   /*
    int x = 0;
    printf ("please enter number");
    scanf("%d" ,&x);
    if (x > 0){
        printf("positive");
    }
    else if (x<0){
        printf("negative");
    }
    else {
        printf("zero");
    }



    int x =0;
    printf ("please enter number");
    scanf("%d",&x);
    if (x%2 == 0){
        printf("EVEN");
    }
    else if (x%2 != 0){
        printf("ODD");
    }
    else
        printf("please enter valid num");




    int x ,y,z =0;
    printf ("please enter number");
    scanf("%d %d %d" , &x , &y , &z);
    if (x>y && x>z){
        printf("%d" ,x);
    }
    else if (y>x && y>z){
        printf("%d" , y);
    }
    else if (z>x && z>y){
        printf("%d" , z);
    }
    else printf("please enter 3 diffrent num");

/*


    int x =0;
    printf("please Enter grade ");
    scanf("%d" , &x);

    if (x<85 && x>=75 ){
        printf("vgood");
    }
    else if (x<75 && x >=65){
        printf("Good");
    }
     else if (x<65 && x >=50){
        printf("Pass");
    }
     else if (x<50){
        printf("fail");
    }
    else if (x>=85 && x<=100){
        printf("Exellent");
    }
    else {
        printf ("Please Enter valid num");
    }



*/
    int x ,y =0;
    char z;
    printf("please enter 2 numbers ");
    scanf("%d %d" , &x , &y);
    printf("please enter operand");
    scanf(" %c", &z);
    switch(z){
case '+':

    printf("%d" ,x+y);
    break ;
case '-':
    printf("%d" ,x-y);
    break ;
case '*':
    printf("%d" ,x*y);
    break ;
case '/':
    if (y == 0){
        printf("enter nun zero num");
    }
    else{
    printf("%d" ,x/y);
    break ;
    }
    }

    return 0;
}

