#include <stdio.h>

int main() {
    int a, b, c, temp;
    
    printf("Enter value for a: ");
    scanf("%d", &a);
    
    printf("Enter value for b: ");
    scanf("%d", &b);
    
    printf("Enter value for c: ");
    scanf("%d", &c);
    
    temp = a;
    a = b;
    b = c;
    c = temp;
    
    printf("After swapping, the values are:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    return 0;
}

