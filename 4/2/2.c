#include <stdio.h>

int main(void) {
    int i;
    char words[68][40];

    for (i=0; i<68; i++) {
        scanf("%s", words[i]);
    }

    for (i=67; i>=0; i--) {
        printf("%s ", words[i]);
    }

    return 0;
}
