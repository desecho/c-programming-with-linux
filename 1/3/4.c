#include <stdio.h>

int main(void){
    int i, n, height, weight, power, resistance, result;

    // Number of robots
    scanf("%d", &n);

    result = 0;

    for (i = 0; i < n; i++) {
        scanf("%d %d %d %d", &height, &weight, &power, &resistance);
        result += (power + resistance) * (weight - height);
    }

    printf("%d", result);
    return 0;
}
