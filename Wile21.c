#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int i = 0;
    int vehicles;
    int cm = 0;
    int currentStreak = 0;
    int longestStreak = 0;

    while (i < N) {
        scanf("%d", &vehicles);

        if (vehicles > 20) {
            congestionMinutes++;
            currentStreak++;

            if (currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
        } else {
            currentStreak = 0; 
        }

        i++;
    }

    printf("CM: %d\n", cm);
    printf("LCStreak: %d\n", longestStreak);

    return 0;
}
