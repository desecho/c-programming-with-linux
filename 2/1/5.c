#include <stdio.h>

int main(void){
    int age, weight, price;

    scanf("%d", &age);
    scanf("%d", &weight);

    price = 0;

    if (age == 60) {
        price = 0;
    } else if (age < 10) {
        price = 5;
    } else {
        if (weight > 20) {
            price += 10;
        }

        price += 30;
    }

    printf("%d\n", price);

    return 0;
}

