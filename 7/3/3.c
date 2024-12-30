#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file;
    double class_average;
    double n;
    int i = 0;

    // Open input file for reading
    file = fopen("gradeComparison.txt", "r");

    fscanf(file, "%lf", &class_average);

    while (fscanf(file, "%lf", &n) != EOF) {
        if (n > class_average) {
            printf("No %d\n", i +2);
            return 0;
        }
        i++;
    }

    printf("Yes\n");

    // Close input file
    fclose(file);

    return 0;
}
