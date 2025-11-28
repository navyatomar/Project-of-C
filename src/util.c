#include <stdio.h>
#include "util.h"

int getInteger(const char *prompt) {       //Function to read an integer from user with a prompt message
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}