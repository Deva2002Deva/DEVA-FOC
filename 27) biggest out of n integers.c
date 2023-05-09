#include <stdio.h>

int main() {
    int n, max, i, num;
    
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    printf("Enter integer 1: ");
    scanf("%d", &max);
    
    for (i = 2; i <= n; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }
    
    printf("The maximum value is %d", max);
    
    return 0;
}


