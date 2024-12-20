#include <stdio.h>

int main(void){
    int n;
    int i;
    double result = 0;

    scanf("%d", &n);

    double prices[n];
    double weights[n];

    for (i = 0; i < n; i++) {
        scanf("%lf", &prices[i]);
    }

    for (i = 0; i < n; i++) {
        scanf("%lf", &weights[i]);
    }

    for (i = 0; i < n; i++) {
        result += prices[i] * weights[i];
    }

    printf("%lf", result);

    return 0;
}
