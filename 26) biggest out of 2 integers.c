#include <stdio.h>

int main() {
    int num1, num2, max;
    
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }
    
    printf("The maximum value is %d", max);
    
    return 0;
}

