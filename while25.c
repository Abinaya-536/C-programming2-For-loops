#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int i = 1;
    int amount;
    int highValueCount = 0;
    int consecutiveHigh = 0;
    int fraudAt = -1;   

    while (i <= N) {
        scanf("%d", &amount);

        if (amount >= 50000) {
            highValueCount++;
            consecutiveHigh++;

            if (consecutiveHigh == 3 && fraudAt == -1) {
                fraudAt = i;   
            }
        } else {
            consecutiveHigh = 0;
        }

        i++;
    }

    if (fraudAt == -1) {
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    } else {
        printf("Fraud Triggered At Attempt: %d\n", fraudAt);
    }

    printf("High-Value Transactions: %d\n", highValueCount);

    return 0;
}
