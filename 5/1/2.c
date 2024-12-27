#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}


void readDate(struct date *d) {
    scanf("%d %d %d", &d->year, &d->month, &d->day);
}

void printDate(struct date d) {
    printf("%02d/%02d/%d\n", d.month, d.day, d.year);
}

struct date advanceDay(struct date d) {
    // First base index
    int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    struct date result;

    if (d.day == days_in_month[d.month]) { // Case where it's the last day of the month
        result.day = 1;
        if (d.month == 12) {
            result.month = 1;
            result.year = d.year + 1;
        } else {
            result.month = d.month + 1;
            result.year = d.year;
        }
    } else {
        result.day = d.day + 1;
        result.month = d.month;
        result.year = d.year;
    }


    return result;
}
