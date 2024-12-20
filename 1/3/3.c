#include <stdio.h>

int main(void){
    int i;
    int n;
    scanf("%d", &n);
    for (i = 0; i < 11; i++) {
        printf("%dx%d = %d\n", i, n, i * n);
    }

    return 0;
}
