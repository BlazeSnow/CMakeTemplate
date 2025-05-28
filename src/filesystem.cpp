#include "../include/filesystem.h"
#include <iostream>
#include <filesystem>

using namespace std;

const filesystem::path CurrentPath = filesystem::current_path();
const string CurrentPathString = CurrentPath.string();

int example2() {
    printf("目录为：%s\n", CurrentPathString.c_str());
    fprintf(stderr, "目录为：%s\n", CurrentPathString.c_str());
    return 0;
}
