#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date *d) {
    scanf("%d %d %d", &d->year, &d->month, &d->day);
}

void printDate(struct date d) {
    printf("%02d/%02d/%d", d.month, d.day, d.year);
}
