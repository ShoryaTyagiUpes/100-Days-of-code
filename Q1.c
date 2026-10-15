// Q1 Write a program to input two numbers and display their sum.

/*
Sample test cases:
Input 1:
9 7
Output 1:
Sum = 16

Input 2:
-8 13
Output 2:
Sum = 5

*/
#include<stdio.h>

int main() {
    int a,b;
    printf("Enter a Number : ");
    scanf("%d", &a);

    printf("Enter a Number : ");
    scanf("%d", &b);

    int sum = a+b;
    printf("Sum is %d :", sum);
    return 0;
}