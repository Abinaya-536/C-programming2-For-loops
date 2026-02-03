#include <stdio.h>

int main() {
    int fuel, N;
    scanf("%d", &fuel);   
    scanf("%d", &N);      

    int i = 0;
    int tripFuel;
    int completed = 0;

    while (i < N) {
        scanf("%d", &tripFuel);  

        if (fuel >= tripFuel) {
            fuel = fuel - tripFuel;
            completed++;
        } else {
            break;  
        }

        i++;
    }

    printf("Completed Trips: %d\n", completed);
    printf("Remaining Fuel: %d", fuel);

    return 0;
}
