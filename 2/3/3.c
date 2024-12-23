#include <stdio.h>

int main(void){
    int i, result;
    char name[50];

    scanf("%s", name);

    for (i = 0; name[i]; i++) {}

    if (i % 2 == 0) {
        result = 1;
    } else {
        result = 2;
    }

    printf("%d\n", result);
    return 0;
}
