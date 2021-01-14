// lab81r.cpp
// Шевченко Тарас
// Лабораторна робота № 8.1(рекурс)
// Пошук та заміна символів у літерному рядку
// Варіант 11
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

char* Change(char* dest, const char* str, char* t, int i)
{
    if (str[i + 2] != 0)
    {
        if (str[i] == 'A' && str[i + 1] == 'G' && str[i + 2] == 'A')
        {
            strcat(t, "**");
            return Change(dest, str, t + 2, i + 3);
        }
        else if (str[i] == 'O' && str[i + 1] == 'G' && str[i + 2] == 'O')
        {
            strcat(t, "**");
            return Change(dest, str, t + 2, i + 3);
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
            return Change(dest, str, t, i);
        }
    }
    else
    {
        *t++ = str[i++];
        *t++ = str[i++];
        *t = '\0';
        return dest;
    }
}
int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    char* dest = new char[151];
    dest[0] = '\0';
    char* result;
    result = Change(dest, str, dest, 0);
    cout << "Modified string (result): " << result << endl;
    return 0;
}