#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int i = 1;
    int attempt;
    int failedCount = 0;
    int consecutiveFail = 0;
    int lockAt = -1;   

    while (i <= N) {
        scanf("%d", &attempt);

        if (attempt == 0) {
            failedCount++;
            consecutiveFail++;

            if (consecutiveFail == 3 && lockAt == -1) {
                lockAt = i;   
            }
        } else {
            consecutiveFail = 0;  
        }

        i++;
    }

    if (lockAt == -1) {
        printf("Lock Triggered At Attempt: Not Locked\n");
    } else {
        printf("Lock Triggered At Attempt: %d\n", lockAt);
    }

    printf("Total Failed Attempts: %d\n", failedCount);

    return 0;
}
