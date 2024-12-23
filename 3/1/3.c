#include <stdio.h>

int sumOfDigits(int n) {
    int m, n2;

    m = n % 10;

    n2 = (n - m) / 10;
    if (n2 == 0) {
        return n;
    }
    return sumOfDigits(n2) + m;
}

int main(void){
    int n;

    scanf("%d", &n);

    printf("%d\n", sumOfDigits(n));

    return 0;
}
