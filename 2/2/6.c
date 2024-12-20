#include <stdio.h>

int main(void){
    int n = 0;
    int sum = 0;

    while (n != -1) {
        scanf("%d", &n);
        if (n != -1) {
            sum += n;
        }
    }

    printf("%d", sum);

    return 0;
}
