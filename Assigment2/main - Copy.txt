#include <stdio.h>
#include <math.h>
#include <ctype.h>
void printCube(int num) {
    long long int cube = pow(num, 3);
    printf("The cube of %d is %lld\n", num, cube);
}




int isAlpha(char(chara)){
    if(isalpha(chara)){
        return 1;
    }
    else {
        return 0;
    }
}



int ispositive(double num){
    if(num>0){
        return 1;
    }

    else{
        return 0;
    }
}




double performOperation(char operatorr, double num1, double num2) {
    switch (operatorr) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 0.0;
            }
            return num1 / num2;
        default:
            printf("Error: Invalid operation. Please use +, -, *, or /.\n");
            return 0.0;
    }
}




int iseven(long long int num){
    if(num%2==0){
            return 1;
    }
    else if (num==0){
        return 0;
    }
    else {
        return 0;
    }
}


char lowertoupper(char lowercase){
    if (islower(lowercase)){
        return toupper(lowercase);
    }
    else {
        return lowercase;
    }

}

int ismultiple(int num1 , int num2){
    if(num2 ==0 ){
        printf("error devision by zeroo");
        return 0;
    }
    else if (num1 %num2 ==0){
        return 1;
    }
}

int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

void displayPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }

    printf("\n");
}



void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);}



int countHoles(int num) {
    int holes = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || digit == 4 || digit == 6 || digit == 9) {
            holes++;
        } else if (digit == 8) {
            holes += 2;
        }
        num /= 10;
    }
    return holes;
}


int isPowerOfTwo(int num) {
    if (num <= 0) {
        return 0;
    }

    while (num > 1) {
        if (num % 2 != 0) {
            return 0;
        }
        num /= 2;
    }

    return 1;
}


int calculateHeatingTime(int temperature) {
    if (temperature >= 0 && temperature < 30) {
        return 7;
    } else if (temperature >= 30 && temperature < 60) {
        return 5;
    } else if (temperature >= 60 && temperature < 90) {
        return 3;
    } else if (temperature >= 90 && temperature <= 100) {
        return 1;
    } else {
        return 0;
    }
}


int addAndFloor(float num1, float num2) {
    float sum = num1 + num2;
    int floorSum = (int)sum;
    return floorSum;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main() {
    /*
    //Q1
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printCube(number);

    */

/*
//Q2
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (isAlpha(character)) {
        printf("%c is an alphabet letter.\n", character);
    } else {
        printf("%c is not an alphabet letter.\n", character);
    }

*/



/*
//Q3
double num;
printf("please enter number ");
scanf("%lf", &num);
if (ispositive(num)){

    printf("positive number");
}
else if (num ==0){
    printf("please enter non-zero number");
}
else {
    printf("negative number");
}
*/


/*
//Q4
 char operatorr;
long long int num1, num2, result;

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operatorr);

    printf("Enter two numbers: ");
    scanf("%lld %lld", &num1, &num2);

    result = performOperation(operatorr, num1, num2);

    if (operatorr != '/' || num2 != 0) {
        printf("Result: %lld\n", result);
    }
*/


/*
//Q5

  long long int num;
    printf("Please enter a number: ");
    scanf("%lld", &num);

    if (num == 0) {
        printf("Please enter a non-zero number.\n");
    } else if (iseven(num)) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
*/

/*
//Q6
char input, output;

    printf("Please enter a character: ");
    scanf(" %c", &input);

    output = lowertoupper(input);

    printf("The uppercase character is: %c\n", output);
*/


/*
//Q7
int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if (ismultiple(num1, num2)) {
        printf("%d is a multiple of %d\n", num1, num2);
    } else {
        printf("%d is not a multiple of %d\n", num1, num2);
    }

*/



/*
//Q8

    int start, end;

    printf("Enter the start of the interval: ");
    scanf("%d", &start);

    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    displayPrimes(start, end);
*/


/*
//Q9

int x ;
int y ;
printf("please enter 2 numbers",x,y);
scanf("%d %d",&x,&y);
printf("Before swapping: x = %d, y = %d\n", x, y);

swap(x, y);

*/


/*
//Q10

 int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int totalHoles = countHoles(number);
    printf("Total number of holes: %d\n", totalHoles);
*/

/*
//Q11
int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPowerOfTwo(number)) {
        printf("%d is a power of 2.\n", number);
    } else {
        printf("%d is not a power of 2.\n", number);
    }
*/



/*
//Q12
int temp ;
printf("please enter the temperature");
scanf("%d" ,&temp);
int heatingTime = calculateHeatingTime(temp);
printf("Required heating time: %d minutes\n", heatingTime);
*/


/*
//Q13
float number1 ;
float number2 ;
printf("please enter two float numbers");
scanf("%f %f",&number1,&number2);
int result = addAndFloor(number1, number2);
printf("Floor of the sum: %d\n", result);
*/



//Q14
int t;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &t);

    if (t < 0) {
        printf("Number of terms cannot be negative.\n");
    } else {
        printf("Fibonacci Series: ");
        for (int i = 0; i < t; i++) {
            printf("%d ", fibonacci(i));
        }
    }


    return 0;
}







