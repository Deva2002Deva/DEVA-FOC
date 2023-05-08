 #include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of the series is %d", sum);

    return 0;
}
