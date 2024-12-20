#include <stdio.h>

int main(void){
    int current;
    double projected;
    int result;

    scanf("%d", &current);
    scanf("%lf", &projected);

    result = current + current * projected / 100;

    printf("%d\n", result);
    return 0;
}
