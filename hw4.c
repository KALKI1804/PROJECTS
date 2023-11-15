#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // If the number is negative, print an error message
    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.");
    }
    else {
        // Calculate the factorial of the number using a loop
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu", num, factorial);
    }

    return 0;
}
