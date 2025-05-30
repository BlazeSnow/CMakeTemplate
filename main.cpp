#define _CRT_SECURE_NO_WARNINGS

#include <filesystem>
#include <iostream>
#include "include/filesystem.h"
#include "include/chcp.h"

using namespace std;

int main() {
    wcout << "Hello world!" << endl;
    example1();
    example2();

    wcout << L"按下任意键以继续......";
    wchar_t PressToContinue;
    wcin >> PressToContinue;
    return 0;
}
