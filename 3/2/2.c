#include <stdio.h>


void print_bytes(int n) {
    int k, m, b;
    k = n / 1000;
    b = n % 1000;
    m = k / 1000;
    k = k % 1000;

    if (m > 0) {
        printf("%d MB and ", m);
    }
    if (m > 0 || k > 0) {
        printf("%d KB and ", k);
    }

    printf("%d B\n", b);
}

int main(void){
    int n, bytes;
    char c;

    scanf("%c %d", &c, &n);

    bytes = 0;

    switch (c)
    {
    case 'i':
        bytes = sizeof(int) * n;
        break;
    case 'c':
        bytes = sizeof(char) * n;
        break;
    case 'd':
        bytes = sizeof(double) * n;
        break;
    case 's':
        bytes = sizeof(short) * n;
        break;
    default:
        printf("invalid tracking code type\n");
        return 1;
    }

    print_bytes(bytes);

    return 0;
}
