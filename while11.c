#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  
    int i = 0;
    int delay;
    int totalDelay = 0;
    int delayedDays = 0;

    while (i < N) {
        scanf("%d", &delay); 
        totalDelay = totalDelay + delay;

        if (delay > 2) {
            delayedDays++;
        }

        i++;      }

    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Days: %d", delayedDays);

    return 0;
}
