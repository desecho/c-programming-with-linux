#include <stdio.h>

int main(void){
    int n;
    int i;
    char str[101];

    scanf("%d %s", &n, str);

    for (i = 0; i < n; i++) {
        printf("%s\n", str);
    }

    return 0;
}
