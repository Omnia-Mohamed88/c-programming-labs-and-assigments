#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{   /*
    //Q1
    int x,y;
    int result ;
    printf("please enter 2 integer numbers ");
    scanf("%d %d",&x,&y);
    result = ((x+y)*3)-10;
    printf("the result is %d" , result);
    */



    /*
    //Q2
    char name[]="omnia";
    int grade=88;
    printf("my name is %s \nmy grade is %d" ,name,grade);
    */

    /*
    //Q3
    float ctemp;
    float ftemp;

    printf("Please enter the temperature in degrees Celsius: ");
    scanf("%f", &ctemp);

    ftemp = (ctemp * 9 / 5) + 32;

    printf("The temperature in Fahrenheit is: %f\n", ftemp);

    */



    //Q4
/*
    long long radius;
    long long int area, circumference;
    const long long int  pi = 3.14159265359;
    printf("Enter the radius of the circle: ");
    scanf("%ld", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area of the circle: %ld\n",area);
    printf("Circumference of the circle: %ld\n",circumference);
*/


    /*
    //Q5

    char character;
    int asciicharacter;

    printf("Please enter a character: ");
    scanf(" %c", &character);

    asciicharacter = character;

    printf("The ASCII value of '%c' is %d\n", character, asciicharacter);
    */


    /*
    //Q6
    int a,b;
    printf("please enter two integer numbers");
    scanf("%d %d",&a,&b);
    if (a == b) {
        printf("%d is equal to %d\n", a, b);
    } else {
        printf("%d is not equal to %d\n", a, b);
        if (a > b) {
            printf("%d is greater than %d\n", a, b);
        } else {
            printf("%d is greater than %d\n", b, a);
        }
    }
    */

    /*
    //Q7
    int x, y, z;

    printf("Please enter 3 integer numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x==y || x==z){
        printf("there are 2 equal numbers");
    }
    else if(y==z){
        printf("there are two equal numbers");
    }
    else if (x < y && x < z) {
        printf("The smallest number is %d\n", x);
    } else if (y < x && y < z) {
        printf("The smallest number is %d\n", y);
    } else {
        printf("The smallest number is %d\n", z);
    }
    */
/*
//Q8
    int num;
    double sqrnum;
    printf("please enter positive number ");
    scanf("%d",&num);
    if(num<1){
        printf("please enter positive number");
    }
    else{
          sqrnum = sqrt(num);
      if (sqrnum == (int)sqrnum){
          printf("%d is a perfect sqr",num);
      }
      else {
        printf("%d is not a perfect sqr",num);
      }

    }
*/

/*

//Q9
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

/*
//Q10
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
*/
/*
//Q11
int sum = 0;
    int i;

    for (i = 1; i <= 100; i++) {
        sum += i;
    }

    printf("The sum of the first 100 integers is: %d\n", sum);
*/

/*

//Q12
    int n;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for(int i= 1;i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

*/


/*

//Q13

int n, i, c = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                c++;
            }
        }

        if (c == 2) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is not a prime number.\n", n);
        }
    }

*/
/*
//Q14
char alpha='A';
char a;
printf("English alphabets from A to Z:\n");
for (a=alpha;a<='z';a++){
    printf("%c ",a);
}


*/


/*
//Q15
    double base, exponent, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

    printf("%f raised to the power %f is equal to %f\n", base, exponent, result);

    */


/*
//Q16

int number,reminder,revernumber=0;
printf("please enter a nun zero number ");
scanf("%d",&number);
if (number ==0){
    printf("please enter nun zero number");
}
else{
    while(number!=0){
    reminder = number%10;
    revernumber=revernumber*10+reminder;
    number=number/10;
    }
    printf("the reverse number is %d",revernumber);
}
*/



/*

//Q17
    int countnum = 0;
    int num;

    printf("Please enter a non-zero number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Please enter a non-zero number.\n");
    } else {
        int temp = num;

        while (temp != 0) {
            temp /= 10;
            countnum++;
        }

        printf("Number of digits: %d\n", countnum);
    }
*/




/*
//Q18

int line =5;
char star = '*';
for (int i =1 ; i<=line ; i++){
    for(int j = 1 ;j<=i;j++){
        printf("%c",star);
    }
    printf("\n");
}
*/

/*
//Q19
int line =5;
char star = '*';
for (int i =1 ; i<=line ; i++){
    for(int j=line ; j>=i;j--){
        printf("%c",star);
    }
printf("\n");
}
*/


/*
//Q20

int line = 5;
char space = ' ';
char star = '*';

for (int i = 1; i <= line; i++) {
        for (int j = 1; j <= line - i; j++) {
            printf("%c", space);
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%c", star);
        }
        printf("\n");
    }
*/



//Q21

int size;
    printf("Enter the size of the X pattern: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == j || j == size - i + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }





    return 0;
}
