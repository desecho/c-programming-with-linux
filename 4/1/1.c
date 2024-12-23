#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;

    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

void behind(int * array, int n) {
    int i, max;

    max = array[0];
    for (i=1; i<n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    for (i=0; i<n; i++) {
        array[i] = max - array[i];
    }
}
