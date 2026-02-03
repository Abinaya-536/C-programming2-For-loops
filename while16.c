#include <stdio.h>

int main() {
    int maxWeight;
    int N;

    scanf("%d", &maxWeight);   
    scanf("%d", &N);           

    int i = 0;
    int personWeight;
    int currentWeight = 0;
    int peopleEntered = 0;
    int overload = 0;

    while (i < N) {
        scanf("%d", &personWeight);  
        if (currentWeight + personWeight <= maxWeight) {
            currentWeight = currentWeight + personWeight;
            peopleEntered++;
        } else {
            overload = 1;   
            break;     
        }

        i++;
    }

    printf("People Entered: %d\n", peopleEntered);

    if (overload == 1) {
        printf("Overload Status: Yes");
    } else {
        printf("Overload Status: No");
    }

    return 0;
}
