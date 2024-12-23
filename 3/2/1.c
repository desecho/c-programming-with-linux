#include <stdio.h>

int main(void){
    int n, i, value, bytes;
    char c;

    scanf("%d", &n);

    bytes = 0;

    for (i = 0; i < n; i++) {
        scanf("%d %c", &value, &c);
        switch (c)
        {
        case 'i':
            bytes += sizeof(int) * value;
            break;
        case 'c':
            bytes += sizeof(char) * value;
            break;
        case 'd':
            bytes += sizeof(double) * value;
            break;
        default:
            printf("invalid tracking code type\n");
            return 1;
        }
    }

    printf("%d bytes\n", bytes);

    return 0;
}
