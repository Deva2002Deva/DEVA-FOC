 #include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char hexadecimal[20];
    int decimal = 0, length, base = 1;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);

    length = strlen(hexadecimal);

    for (int i = length - 1; i >= 0; i--) ;
    
    
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
            decimal += (hexadecimal[i] - '0') * base;
        } else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f') {
            decimal += (hexadecimal[i] - 'a' + 10) * base;
        } else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
            decimal += (hexadecimal[i] - 'A' + 10) * base;
        }
        base *= 16;
    }

    printf("The decimal equivalent is: %d", decimal);

    return 0;
}
