//Write a program to apply left shift and right shift operator

#include <stdio.h>

int main() {
    int num, shift;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter how many positions to shift: ");
    scanf("%d", &shift);

    printf("\nLeft Shift  (num << shift) = %d\n", num << shift);
    printf("Right Shift (num >> shift) = %d\n", num >> shift);

    return 0;
}
