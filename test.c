#include <stdio.h>
#include "test.h"

// Implementation of the function declared in the header file

void helloWorld() {

	char userInput[10];

	printf("Who am I: ");

	scanf("%s", userInput);

	printf("\nI am %s\n", userInput);

}
