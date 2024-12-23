#include <stdio.h>

int main(void){
    int n;
    int i;
    char str1[101];
    char str2[101];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %s", str1, str2);
        printf("%s %s\n", str2, str1);
    }

    return 0;
}
