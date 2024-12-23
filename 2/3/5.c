#include <stdio.h>

int main(void){
    int i, length, result, middle;
    int pos = -1;
    char word[51];

    scanf("%s", word);

    for (length = 0; word[length]; length++) {}

    for (i = 0; i < length; i++) {
        if (word[i] == 't' || word[i] == 'T') {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        result = -1;
    } else {
        middle = length / 2;
        if (pos <= middle) {
            result = 1;
        } else {
            result = 2;
        }
    }

    printf("%d\n", result);
    return 0;
}
