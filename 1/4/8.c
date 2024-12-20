#include <stdio.h>

int main(void){
    double money, price;
    int result;

    scanf("%lf", &money);
    scanf("%lf", &price);

    result = money / price;

    printf("%d\n", result);
    return 0;
}
