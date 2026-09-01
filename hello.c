#include <stdio.h>

void greet(const char* name) {
    printf("Hello, %s!\n", name);
}

int main () {
    printf("Hello, World!\n");
    greet("Niswarth");
    return 0;
}