 #include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    if (number >= 1 && number <= 100) {
        printf("1\n"); 
    } else {
        printf("0\n");
    }

    return 0;
}
