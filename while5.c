#include <stdio.h>

int main() {
    int n, i = 0;
    int order;
    int successful = 0;
    int cancelled = 0;

    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &order);

        if (order == 1) {
            successful++;
        } else {
            cancelled++;
        }

        i++;
    }

    printf("Successful: %d\n", successful);
    printf("Cancelled: %d\n", cancelled);

    if (cancelled > successful) {
        printf("Status: Risk\n");
    } else {
        printf("Status: Safe\n");
    }

    return 0;
}
