#include <stdio.h>

int main(void){
    char c;
    int i;

    scanf("%c", &c);

    printf("++++%c++++\n", c);
    printf("+++%c%c%c+++\n", c, c, c);
    printf("++%c%c%c%c%c++\n", c, c, c, c, c);
    printf("+%c%c%c%c%c%c%c+\n", c, c, c, c, c, c, c);
    for (i = 0; i < 9; i++) {
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
