#include <stdio.h>

// Read integers from the file and store them in the array
void read_data(FILE *file, int data[]) {
    int i = 0;

    while (fscanf(file, "%d", &data[i]) != EOF) {
        i++;
    }
}

// Get average of an array of integers
double get_average(int data[], int size) {
    int i;
    double sum = 0; // This has to be double due to the fact that the result of the calculation should be double

    // Calculate sum
    for (i = 0; i < size; i++) {
        sum += data[i];
    }

    return sum / size;
}

int main(int argc, char *argv[]) {
    FILE *file;
    int size; // Number of integers in a file
    double average;

    // Open input file for reading
    file = fopen("studentGrades.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    // Get number of integers
    fscanf(file, "%d", &size);

    int data[size];
    read_data(file, data);

    // Close input file
    fclose(file);

    average = get_average(data, size);

    printf("%.2lf\n", average);

    return 0;
}
