#include<stdio.h>

int main() {
    
    int a,b;
    printf("Enter a Number");
    scanf("%d", &a);

    printf("Enter a Number");
    scanf("%d", &b);

    int sum = a+b;
    printf("Sum is : %d", sum);
    return 0;
}