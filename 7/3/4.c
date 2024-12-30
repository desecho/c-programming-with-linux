#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file;
    int input;
    int n;

    scanf("%d", &input);

    // Open input file for reading
    file = fopen("myGrades.txt", "r");

    while (fscanf(file, "%d", &n) != EOF) {
    }

    // Close input file
    fclose(file);

    if (n == input) {
        return 0;
    }

    file = fopen("myGrades.txt", "a");

    fprintf(file, " %d", input);
    fclose(file);

    file = fopen("myGrades.txt", "r");

    while (fscanf(file, "%d", &n) != EOF) {
        printf("%d ", n);
    }
    fclose(file);

    return 0;
}
