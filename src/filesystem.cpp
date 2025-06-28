#include "../include/filesystem.h"
#include <iostream>
#include <filesystem>

using namespace std;

const filesystem::path CurrentPath = filesystem::current_path();

int example2() {
    wcout << L"目录为：" << CurrentPath << endl;
    wcerr << L"目录为：" << CurrentPath << endl;
    return 0;
}
