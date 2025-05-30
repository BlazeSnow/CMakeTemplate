#include "../include/cin_ignore.h"

#include <iostream>

void cin_ignore() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}
