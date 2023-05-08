#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of the even number series is %d", sum);

    return 0;
}
