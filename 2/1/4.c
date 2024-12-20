#include <stdio.h>

int main(void){
    int n, i, weight, winner;
    int sum1 = 0;
    int sum2 = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &weight);
        sum1 += weight;
        scanf("%d", &weight);
        sum2 += weight;
    }

    if (sum1 > sum2) {
        winner = 1;
    } else {
        winner = 2;
    }

    printf("Team %d has an advantage\n", winner);
    printf("Total weight for team 1: %d\n", sum1);
    printf("Total weight for team 2: %d\n", sum2);

    return 0;
}
