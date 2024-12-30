#include <stdio.h>
#include <math.h>

int main(void) {
    int n;

    scanf("%d", &n);
    printf("%.8lf\n", sqrt(n));
    printf("%.10lf\n", exp(1));
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra -lm program.c -o program\n");
    return 0;
}
