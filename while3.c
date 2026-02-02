#include <stdio.h>

int main() {
    int totalData, n;
    int usage;
    int day = 0;

    scanf("%d", &totalData);
    scanf("%d", &n);

    while (day < n && totalData > 0) {
        scanf("%d", &usage);
        totalData = totalData - usage;
        day++;
    }

    if (totalData < 0) {
        totalData = 0;
    }

    printf("Days Used: %d\n", day);
    printf("Remaining Data: %dGB\n", totalData);

    return 0;
}
