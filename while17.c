#include <stdio.h>

int main() {
    int walletBalance;
    int N;

    scanf("%d", &walletBalance);   
    scanf("%d", &N);               

    int i = 0;
    int amount;
    int successful = 0;

    while (i < N) {
        scanf("%d", &amount);

        if (walletBalance >= amount) {
            walletBalance = walletBalance - amount;
            successful++;
        } else {
            break;  
        }

        i++;
    }

    printf("Successful Purchases: %d\n", successful);
    printf("Final Balance: %d", walletBalance);

    return 0;
}
