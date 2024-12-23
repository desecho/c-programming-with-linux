#include <stdio.h>

void reverseArray(int a[]) {
    int i, j, tmp;
    for(i=0, j=5;;i++,j--) {
        if (j<i) break;
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
    return;
}

int main(void){
	int i;
    int n = 6;
    int a[6];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    reverseArray(a);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

	return 0;
}
