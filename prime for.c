#include <stdio.h>

int main() {
    int N, count = 0;

    scanf("%d", &N);

    for(int i = 2; i <= N; i++) {
        int prime = 1;

        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }

        if(prime == 1) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
