#include <stdio.h>

int main() {
    int N, count = 0;

    scanf("%d", &N);

    for (int i = 2; i <= N; i++) {
        int isPrime = 1; 

        if (i % 2 == 0 && i != 2)
            isPrime = 0;
        else if (i % 3 == 0 && i != 3)
            isPrime = 0;
        else if (i % 5 == 0 && i != 5)
            isPrime = 0;
        else if (i % 7 == 0 && i != 7)
            isPrime = 0;

        if (isPrime)
            count++;
    }

    printf("%d", count);

    return 0;
}
