#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    double price;
    double total_price;
    // Check that all required arguments are provided
    if (argc != 3) {
        printf("Invalid input.\n");
        return 0;
    }

    n = atoi(argv[1]);
    price = atof(argv[2]);
    total_price = n * price;

    printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n", n, price, total_price);

    return 0;
}
