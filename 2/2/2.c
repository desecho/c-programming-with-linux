#include <stdio.h>

int main(void){
    int n;
    int i;
    double sum = 0;
    double average;

    scanf("%d", &n);

    double weights[n];

    for (i = 0; i < n; i++) {
        scanf("%lf", &weights[i]);
        sum += weights[i];
    }

    average = sum / n;

    for (i = 0; i < n; i++) {
        printf("%.1lf\n", average - weights[i]);
    }

    return 0;
}
