 #include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("The sum of the digits of %d is: %d", num, sum);

    return 0;
}