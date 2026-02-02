#include <stdio.h>

int main() {
    int capacity, n;
    int change;
    int occupied = 0;
    int criticalCount = 0;
    int i = 0;
    int limit;

    scanf("%d", &capacity);
    scanf("%d", &n);

    limit = (capacity * 90) / 100; 

    while (i < n) {
        scanf("%d", &change);

        occupied = occupied + change;

        if (occupied > limit) {
            criticalCount++;
        }

        i++;
    }

    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalCount);

    return 0;
}
