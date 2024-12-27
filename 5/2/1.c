#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    struct point * polygon;
    int num;
    scanf("%d", &num);

    polygon = (struct point *) malloc(num * sizeof(struct point));

    initializePoly(polygon, num);
    printPoly(polygon, num);
    free(polygon);
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point *poly, int num) {
    int i;
    for (i=0; i<num; i++) {
        poly[i].x = -i;
        poly[i].y = i * i;
    }
}
