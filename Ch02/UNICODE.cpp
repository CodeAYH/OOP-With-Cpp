#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main()
{
    wchar_t message_korean[] = L"반갑다 세계야";
    wchar_t message_chinese[] = L"반갑다 중국아";
    wchar_t message_japanese[] = L"반갑다 일본아";
    wchar_t message_russian[] = L"반갑다 러샨아";

    cout << "Hello World!" << endl;
    _setmode(_fileno(stdout), _O_U16TEXT);

    wcout << message_korean << endl;
    wcout << message_chinese << endl;
    wcout << message_japanese << endl;
    wcout << message_russian << endl;

    return 0;
}