#include <stdio.h>

int main(void){
    int n1, n2;
    int special = 36;
    int price;

    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n1 + n2 >= 10) {
        printf("Special tax\n");
        printf("%d\n", special);
    } else {
        price = (n1 + n2) * 2;
        printf("Regular tax\n");
        printf("%d\n", price);

    }

    return 0;
}
