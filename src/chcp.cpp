#include "../include/chcp.h"
#include <iostream>
#include <string>
#include <locale>
#include <cstdlib>

using namespace std;

void example1() {
#ifdef WIN32
    system("chcp 65001");
    std::locale::global(std::locale(""));
    wcout.imbue(std::locale());
#endif

    int a = 10;
    double b = 3.14;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    char c = '嗨';
    cout << "c = " << c << endl;

    char *str = "你好！";
    cout << "str = " << str << endl;

    wcout << L"输入宽字符：" << endl;
    wchar_t d;
    wcin >> d;
    wcin.ignore();
    wcout << L"d = " << d << endl;
}
