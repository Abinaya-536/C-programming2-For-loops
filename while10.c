#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  
    int i = 0;
    int hours;
    int inactive = 0;

    while (i < N) {
        scanf("%d", &hours);  
        if (hours == 0) {
            inactive++;
        }

        i++;   // move to next week
    }

    printf("Inactive Weeks: %d\n", inactive);

    if (inactive >= 3) {
        printf("Risk Status: High");
    } else {
        printf("Risk Status: Low");
    }

    return 0;
}
