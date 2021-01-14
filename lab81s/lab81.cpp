
// lab81.cpp
// Шевченко Тарас
// Лабораторна робота № 8.1(string)
// Пошук та заміна символів у літерному рядку
// Варіант 11

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string Change(string& str)
{
    if (str.length() < 3)
    {
        cout << "Введіть більше символів";
        return str;
    }

    while (str.find("AGA") != -1)
    {
        str = str.replace(str.find("AGA"), 3, "**");

    }

    while (str.find("OGO") != -1)
    {
        str = str.replace(str.find("OGO"), 3, "**");


    }
    return str;
}

int main()
{
    string result;
    cout << "Enter string:" << endl;
    getline(cin, result);
    Change(result);
    cout << "Modified string (result): " << result << endl;
    return 0;
}
