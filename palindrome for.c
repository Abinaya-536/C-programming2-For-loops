#include <stdio.h>

int main() {
    int N, temp, reverse = 0;

    scanf("%d", &N);

    temp = N;

    for (; N > 0; N = N / 10) {   
        int digit = N % 10;  
        reverse = reverse * 10 + digit;
    }

    if (reverse == temp)
        printf("Yes");
    else
        printf("No");

    return 0;
}
