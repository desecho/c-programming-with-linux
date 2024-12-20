#include <stdio.h>

int main(void){
    int min, max, temperature;

    scanf("%d %d", &min, &max);

    while (temperature != -999) {
        scanf("%d", &temperature);
        if (temperature == -999) {
            break;
        }
        if (temperature < min || temperature > max) {
            printf("Alert!\n");
            break;
        } else {
            printf("Nothing to report\n");
        }
    }

    return 0;
}
