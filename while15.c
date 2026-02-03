#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  
    int i = 0;
    int overtime;
    int totalOvertime = 0;
    int burnoutDays = 0;

    while (i < N) {
        scanf("%d", &overtime); 
        totalOvertime = totalOvertime + overtime;

        if (overtime > 4) {
            burnoutDays++;
        }

        i++; 
    }

    printf("Total Overtime: %d\n", totalOvertime);
    printf("Burnout Days: %d", burnoutDays);

    return 0;
}
