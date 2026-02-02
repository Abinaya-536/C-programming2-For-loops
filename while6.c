#include <stdio.h>

int main() {
    int maxWeight, n;
    int weight;
    int totalWeight = 0;
    int passengers = 0;
    int i = 0;

    scanf("%d", &maxWeight);
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &weight);

        if (totalWeight + weight > maxWeight) {
            break;   // overload happens
        }

        totalWeight = totalWeight + weight;
        passengers++;
        i++;
    }

    printf("Passengers Allowed: %d\n", passengers);

    if (i < n) {
        printf("Overload: Yes\n");
    } else {
        printf("Overload: No\n");
    }

    return 0;
}
