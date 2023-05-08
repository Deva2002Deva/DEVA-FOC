  #include <stdio.h>

int main() {
    int n, i, num;
    float sum = 0.0, average;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    average = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f", average);

    return 0;
}
