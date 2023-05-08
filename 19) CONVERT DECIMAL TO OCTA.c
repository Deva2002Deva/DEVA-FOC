 #include <stdio.h>

int main() {
    int decimal, remainder, i = 0;
    int octal[20];

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        remainder = decimal % 8;
        octal[i] = remainder;
        i++;
        decimal /= 8;
    }

    printf("The octal equivalent is: ");
    (int j = i - 1; j >= 0; j--); {
        printf("%d", octal[j]);
    }

    return 0;
}
