// Write a program to input two numbers and display their sum, difference, product, and quotient.
/*
Input 1:
10 5
Output 1:
Sum=15, Diff=5, Product=50, Quotient=2
Input 2:
9 3
Output 2:
Sum=12, Diff=6, Product=27, Quotient=3
*/
#include<stdio.h>

int main() {
    int a,b;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter a number: ");
    scanf("%d", &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if (b != 0) {
        printf("Quotient = %.2f\n", (float)a / b);
    } else {
        printf("Quotient is undefined");
    }

    return 0;
}