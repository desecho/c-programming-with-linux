#include <stdio.h>

int main(void){
    int number;
    int guess;
    int try = 0;

    scanf("%d", &number);

    while (number != guess) {
        scanf("%d", &guess);
        if (guess < number) {
            printf("it is more\n");
        } else if (guess > number) {
            printf("it is less\n");
        }
        try++;
    }

    printf("Number of tries needed:\n");
    printf("%d\n", try);

    return 0;
}
