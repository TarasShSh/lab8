// lab81.cpp
// Шевченко Тарас
// Лабораторна робота № 8.1(char)
// Пошук та заміна символів у літерному рядку
// Варіант 11

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 

using namespace std;
bool Count(char* str) {
    char* strTail = str;
    while (true) {
        size_t pos = strcspn(strTail, "AGAnOGO");
        char c = strTail[pos];
        if (c == 0) return false;
        strTail += pos;
        if (strncmp(strTail, "AGA", 3) == 0 || strncmp(strTail, "OGO", 3) == 0 ) {
            return true;
        }
        else {
            strTail++;
        }
    }
}

void Change(char* str, char* newStr) {
    char* strTail = str;
    char* newStrTail = newStr;
    while (true) {

        size_t pos = strcspn(strTail, "AGAnOGO");

        strncpy_s(newStrTail, pos + 1, strTail, pos);

        char c = strTail[pos];
        if (c == 0) break;

        newStrTail += pos;
        strTail += pos;

        if (strncmp(strTail, "AGA", 3) == 0 || strncmp(strTail, "OGO", 3) == 0 ) {
            strncpy_s(newStrTail, 4, "**", 3);
            newStrTail += 2;
            strTail += 3;
        }
        else {
            strncpy_s(newStrTail++, 3, strTail++, 1);
        }
    }
    return;
}

int main() {
    char str[101];
    char newStr[151] = "";

    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    bool found = Count(str);
    Change(str, newStr);

    cout << "String: " << str << endl << endl;
    if (found) {
        cout << "OGO/AGA were found! " << endl;
        cout << "Modified string (result): " << newStr << endl;
    }
    else {
        cout << "OGO/AGA were not found! " << endl;
    }

    return 0;
}