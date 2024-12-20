#include <stdio.h>

int main(void){
    int i, n, sum, grade;

    scanf("%d", &n);

    sum = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &grade);
        sum += grade;
    }

    printf("%.2lf\n", (double) sum / n);
    return 0;
}
