#include <stdio.h>

double exponential_series(double x, int n) {
    double result = 0;
    double term = 1;
    int i;
    for (i = 1; i <= n; i++) {
        term *= x / i;
        result += term;
    }
    return result;
}

int main() {
    double x = 1.5;
    int n = 10;
    double result = exponential_series(x, n);
    printf("e^%lf - 1 = %lf\n", x, result);
    return 0;
}

