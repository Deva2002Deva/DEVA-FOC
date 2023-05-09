#include <stdio.h>
#include <math.h>

double sin_series(double x, int n) {
    double result = 0;
    int i;
    for (i = 0; i <= n; i++) {
        double term = pow(-1, i) * pow(x, 2 * i + 1) / tgamma(2 * i + 3);
        result += term;
    }
    return result;
}

int main() {
    double x = 1.0;
    int n = 10;
    double result = sin_series(x, n);
    printf("sin(%lf) = %lf\n", x, result);
    return 0;
}

