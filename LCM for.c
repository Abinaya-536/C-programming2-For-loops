#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int max = (A > B) ? A : B;

    for (int i = max; ; i++) {   
        if (i % A == 0 && i % B == 0) {
            printf("%d", i);   
            break;              
        }
    }

    return 0;
}
