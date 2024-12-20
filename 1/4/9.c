#include <stdio.h>

int main(void){
    double weight;
    int price = 45;
    int weight_in_bag = 120;
    int result;

    scanf("%lf", &weight);

    result = ((int) weight / weight_in_bag + 1) *  price;

    printf("%d\n", result);
    return 0;
}
