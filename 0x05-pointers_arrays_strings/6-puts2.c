#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
*/
#include <stdio.h>

void puts2(const char* string) {
    int i;

    for (i = 0; string[i] != '\0'; i += 2) {
        printf("%c\n", string[i]);
    }
}

int main() {
    const char* my_string = "Hello, world!";

    puts2(my_string);
    return 0;
}

