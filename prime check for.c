#include <stdio.h>

int main() {
    int N, isPrime = 1;

    scanf("%d", &N);

    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
