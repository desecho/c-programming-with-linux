#include <stdio.h>

int main(void){
    int n;
    double gas;
    double result;
    int fee = 0;
    scanf("%d %lf", &n, &gas);

    if (n > 0) {
        fee = 1;
    }

    result = (gas + fee) / (n + 1);
    printf("%.2lf\n", result);
    return 0;
}
