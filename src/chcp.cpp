#include "../include/chcp.h"
#include "../include/cin_ignore.h"
#include <locale>
#include <string>

void example1() {
    setlocale(LC_ALL, "");

    int a = 10;
    double b = 3.14;
    wprintf(L"a = %d\nb = %lf\n", a, b);

    wchar_t c = L'嗨';
    wprintf(L"c = %lc\n", c);

    const wchar_t *str = L"你好！";
    wprintf(L"str = %ls\n", str);

    wprintf(L"输入宽字符：");
    wchar_t d;
    wscanf(L"%lc", &d);
    cin_ignore();

    wprintf(L"d = %lc\n", d);
}
