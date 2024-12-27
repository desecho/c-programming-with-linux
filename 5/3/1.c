#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

struct student *createStudent(char studentName[], int studentAge) {
    struct student *studptr;
    studptr = (struct student *) malloc(sizeof(struct student));
    strcpy(studptr->name, studentName);
    studptr->age = studentAge;
    studptr->next = NULL;
    return studptr;
}
