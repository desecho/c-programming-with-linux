#include <stdio.h>

int main(void){
    int height, leaflets;
    char *result = "";

    scanf("%d", &height);
    scanf("%d", &leaflets);

    if (height <=5 && leaflets >= 8) {
        result = "Tinuviel";
    } else if (height >=10 && leaflets >= 10) {
        result = "Calaelen";
    } else if (height <=8 && leaflets <= 5) {
        result = "Falarion";
    } else if (height >=12 && leaflets <= 7) {
        result = "Dorthonion";
    } else {
        result = "Uncertain";
    }

    printf("%s\n", result);

    return 0;
}
