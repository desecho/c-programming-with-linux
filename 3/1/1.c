#include <stdio.h>

int main(void){
    int n, i;
    double value;
    char unit;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%lf %c", &value, &unit);
        switch (unit)
        {
        case 'm':
            printf("%lf %s\n", 3.2808 * value, "ft");
            break;
        case 'g':
            printf("%lf %s\n", 0.002205 * value, "lbs");
            break;
        case 'c':
            printf("%lf %s\n", 32 + 1.8 * value, "f");
            break;
        default:
            break;
        }
    }

    return 0;
}
