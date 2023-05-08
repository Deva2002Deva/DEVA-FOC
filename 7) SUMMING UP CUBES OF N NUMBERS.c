 #include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i*i*i;
    }

    printf("Sum of the cubes of the first %d numbers is %d", n, sum);

    return 0;
}
