#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  
    int i = 0;
    int usage;
    int maxUsage = 0;
    int surgeHours = 0;

    while (i < N) {
        scanf("%d", &usage); 

        if (usage > maxUsage) {
            maxUsage = usage;
        }

        if (usage > 5) {
            surgeHours++;
        }

        i++;     }

    printf("Max Usage: %d\n", maxUsage);
    printf("Surge Hours: %d", surgeHours);

    return 0;
}
