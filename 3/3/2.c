#include <stdio.h>

void new_age(int*);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	new_age(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}

void new_age(int *ageAddr) {
    if (*ageAddr > 20) {
        *ageAddr -= 10;
    } else {
        *ageAddr *= 2;
    }
}
