#include "../include/cin_ignore.h"

#include <iostream>

void cin_ignore() {
    int ch;
    while ((ch = getwchar()) != '\n' && ch != EOF);
}
