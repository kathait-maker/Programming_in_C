//Write a program to apply bitwise OR, AND and NOT operators on bit level.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("\nBitwise AND (a & b) = %d\n", a & b);
    printf("Bitwise OR  (a | b) = %d\n", a | b);
    printf("Bitwise NOT (~a)    = %d\n", ~a);
    printf("Bitwise NOT (~b)    = %d\n", ~b);

    return 0;
}
