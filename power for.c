#include <stdio.h>

int main() {
    int N, P;
    int result = 1;

    // Read input
    scanf("%d %d", &N, &P);

    // Loop to calculate power
    for(int i = 1; i <= P; i++) {
        result = result * N;
    }

    // Print result
    printf("%d", result);

    return 0;
}
