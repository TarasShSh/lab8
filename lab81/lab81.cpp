// lab81.cpp
// Шевченко Тарас
// Лабораторна робота № 8.1(ітер)
// Пошук та заміна символів у літерному рядку
// Варіант 11
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

char* Change(char* str, bool& found)
{
    if (strlen(str) < 3)
        return str;
    char* tmp = new char[strlen(str) + 1];
    char* t = tmp;
    tmp[0] = '\0';
    int i = 0;
    found = false;
    while (str[i + 2] != 0)
    {
        if (str[i] == 'A' && str[i + 1] == 'G' && str[i + 2] == 'A')
        {
            strcat(t, "**");
            t += 2;
            i += 3;
            found = true;
        }
        else if (str[i] == 'O' && str[i + 1] == 'G' && str[i + 2] == 'O')
        {
            strcat(t, "**");
            t += 2;
            i += 3;
            found = true;
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
        }
    }
    *t++ = str[i++];
    *t++ = str[i++];
    *t = '\0';
    strcpy(str, tmp);
    return tmp;
}

int main()
{

    bool found;
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    
    char* dest = new char[151];
    dest = Change(str, found);
    if (found)
    {
        cout << "OGO/AGA were found! " << endl;
        cout << "Modified string (result): " << dest << endl;
    }
    else
    {
        cout << "OGO/AGA were not found!" << endl;
    }
    return 0;
}