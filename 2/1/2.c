#include <stdio.h>

int main(void){
    int n;
    int base = 10;
    int cap = 53;
    int price_h = 5;
    int price;

    scanf("%d", &n);

    price = base + price_h * n;

    if (price > cap) {
        price = cap;
    }

    printf("%d\n", price);
    return 0;
}
