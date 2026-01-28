#include <stdio.h>

int main() {
    int N, temp, digit;
    int sum = 0;

    scanf("%d", &N);
    temp = N;

    for (; N > 0; N = N / 10) {
        digit = N % 10;

        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
    }

    if (sum == temp)
        printf("Yes");
    else
        printf("No");

    return 0;
}
