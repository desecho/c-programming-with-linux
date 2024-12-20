#include <stdio.h>

int main(void){
    int n = 10;
    int ingredients[n];
    int id;
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &ingredients[i]);
    }

    scanf("%d", &id);

    printf("%d\n", ingredients[id]);

    return 0;
}
