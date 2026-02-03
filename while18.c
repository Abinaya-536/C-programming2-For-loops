#include <stdio.h>

int main() {
    int capacity;
    int N;

    scanf("%d", &capacity);  
    scanf("%d", &N);          

    int i = 0;
    int load;
    int safeHours = 0;
    int failureCount = 0;

    while (i < N) {
        scanf("%d", &load);   

        if (load <= capacity) {
            safeHours++;
        } else {
            failureCount++;
        }

        i++;  
    }

    printf("Safe Hours: %d\n", safeHours);
    printf("Failure Count: %d", failureCount);

    return 0;
}
