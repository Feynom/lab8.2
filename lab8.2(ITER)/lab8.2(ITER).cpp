﻿#include <iostream>
#include <Windows.h>

using namespace std;

int count(char* str);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char str[201];

    cout << "Введіть строку: ";
    cin.getline(str, 200); cout << endl;

    cout << "Кількість слів: " << count(str) << endl;

    return 0;
}

int count(char* str)
{
    int k = 0;
    int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] != ' ')
            break;
    for (i; i < strlen(str); i++)
        if (str[i] == ' ')
            for (i; i < strlen(str); i++)
                if (str[i] != ' ')
                {
                    k++;
                    break;
                }
    return k + 1;
}