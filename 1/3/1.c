#include <stdio.h>

int main(void){
    int x, y, z;
    x = 25 - 23;
    y = 60 * 24 * x;
    z = 60 * y;
    printf("Dear Procrastinator,\n");
    printf("You still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!", x, y, z);

    return 0;
}
