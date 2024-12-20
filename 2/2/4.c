#include <stdio.h>

int main(void){
    int n;
    int i;
    int counter = 0;

    scanf("%d", &n);

    int populations[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &populations[i]);
    }

    for (i = 0; i < n; i++) {
        if (populations[i] > 10000) {
            counter++;
        }
    }

    printf("%d", counter);

    return 0;
}
