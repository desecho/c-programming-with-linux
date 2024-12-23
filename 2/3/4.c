#include <stdio.h>

int main(void){
    int i, n, length;
    char word[101];
    int max_length = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", word);
        for (length = 0; word[length]; length++) {}
        if (length > max_length) {
            max_length = length;
        }
    }

    printf("%d\n", max_length);
    return 0;
}
