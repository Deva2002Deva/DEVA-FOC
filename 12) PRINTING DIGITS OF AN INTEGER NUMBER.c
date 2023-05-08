#include <stdio.h>

int main() {
    int num, digit, reversed = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("The digits of %d are: ", num);

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    while (reversed != 0) {
        digit = reversed % 10;
        printf("%d ", digit);
        reversed /= 10;
    }

    return 0;
}
