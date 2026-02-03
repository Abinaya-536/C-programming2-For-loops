#include <stdio.h>

int main() {
    int ATMcash;
    int N;

    scanf("%d", &ATMcash);   
    scanf("%d", &N);       

    int i = 0;
    int withdraw;
    int successful = 0;

    while (i < N) {
        scanf("%d", &withdraw);  
        if (ATMcash >= withdraw) {
            ATMcash = ATMcash - withdraw;
            successful++;
        } else {
            break;   
        }

        i++;
    }

    printf("Successful Withdrawals: %d\n", successful);
    printf("Remaining Cash: %d", ATMcash);

    return 0;
}
