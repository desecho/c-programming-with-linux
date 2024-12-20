#include <stdio.h>

int main(void){
    int population;
    int infected = 1;
    int day = 1;

    scanf("%d", &population);

    while (infected < population) {
        infected += infected * 2;
        day++;
    }

    printf("%d\n", day);

    return 0;
}
