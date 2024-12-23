#include <stdio.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int min(int, int);

int main(void){
    int n, i, min_value;

    scanf("%d", &n);
    int numbers[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    min_value = numbers[0];

    for (i = 1; i < n; i++) {
        min_value = min(min_value, numbers[i]);
    }

    printf("%d", min_value);

    return 0;
}
