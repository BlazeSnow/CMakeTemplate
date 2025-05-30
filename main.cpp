#include <filesystem>
#include <iostream>
#include "include/filesystem.h"
#include "include/chcp.h"
#include "include/cin_ignore.h"

using namespace std;

int main() {
    printf("Hello world!\n");
    example1();
    example2();

    //cin_ignore();
    wprintf(L"按下任意键以继续......");
    getchar();
    return 0;
}
