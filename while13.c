#include <stdio.h>

int main() {
    int dataPack;
    int N;

    scanf("%d", &dataPack);   
    scanf("%d", &N);     
    int i = 0;
    int usage;
    int exhaustedDay = -1;
    int overusedData = 0;

    while (i < N) {
        scanf("%d", &usage);  

        dataPack = dataPack - usage;

        if (dataPack <= 0 && exhaustedDay == -1) {
            exhaustedDay = i + 1;  

            if (dataPack < 0) {
                overusedData = -dataPack;
            }

            break; 
        }

        i++;
    }

    if (exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d", overusedData);
    }

    return 0;
}
