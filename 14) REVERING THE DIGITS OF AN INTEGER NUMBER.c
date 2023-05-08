 #include <stdio.h>

int main() {
    int num, digit, reversed = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("The reverse of %d is: %d", num, reversed);

    return 0;
}
