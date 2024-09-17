#include <stdio.h>
#include <conio.h>

int main() {
    int a, b;

    // Input the numbers
    printf("Enter the first number: ");
    scanf_s("%d", &a);
    printf("Enter the second number: ");
    scanf_s("%d", &b);

    // Display the numbers before swapping
    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swap the numbers using arithmetic operations
    a = a + b;
    b = a - b;
    a = a - b;

    // Display the numbers after swapping
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
