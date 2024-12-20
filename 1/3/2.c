#include <stdio.h>

int main(void){
    int i;
    int n = 8;
    for (i = 0; i < 11; i++) {
        printf("%dx%d = %d\n", i, n, i * n);
    }

    return 0;
}
