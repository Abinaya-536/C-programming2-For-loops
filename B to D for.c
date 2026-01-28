#include <stdio.h>

int main() {
    int binary, decimal = 0;
    int base = 1;

    scanf("%d", &binary);

    for (int n = binary; n > 0; n = n / 10) {
        int digit = n % 10;  
        decimal = decimal + digit * base;
        base = base * 2;  
    }

    printf("%d", decimal);

    return 0;
}
