#include <stdio.h>
#include "main.h"

// Implementation of the function declared in the header file

void whoamii() {

	char userInput[10];

	printf("Who am I: ");

	scanf("%s", userInput);

	printf("\nI am %s\n", userInput);

}
