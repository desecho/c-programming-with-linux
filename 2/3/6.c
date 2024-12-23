#include <stdio.h>
#include <string.h>

int main(void) {
    char word[51];
    int i, j, length, counter;
    int swap;
    char c;

    scanf("%s", word);
    length = strlen(word);

    // Sort letters in the word
    for (j=0; j<length-1; j++) {
        for (i=0; i<length-1; i++) {
            if (word[i] > word[i+1]) {
                swap = word[i];
                word[i] = word[i+1];
                word[i+1] = swap;
            }
        }
    }

    counter = 0;
    c = '@';

    for (i=0; i<length - 1; i++) {
        if (word[i] == word[i+1] && c != word[i]) {
            counter++;
            c = word[i];
        }
    }

    printf("%d\n", counter);

    return 0;
}
