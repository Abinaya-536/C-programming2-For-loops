#include <stdio.h>

int main() {
    int max;
    int N;

    scanf("%d", &max);   
    scanf("%d", &N);           
    int i = 0;
    int arrivals;
    int treated = 0;
    int rejected = 0;

    while (i < N) {
        scanf("%d", &arrivals); 
        if (treated + arrivals <= max) {
            treated = treated + arrivals; 
        } else {
            rejected = rejected + ((treated + arrivals) - max);
            treated = max;          
        }

        i++;  
    }

    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d", rejected);

    return 0;
}
