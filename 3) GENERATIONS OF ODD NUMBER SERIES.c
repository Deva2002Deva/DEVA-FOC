  #include <stdio.h>

int main() {
    int n, i;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}