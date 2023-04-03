#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>

#include "func.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string YESorNO;
    string com;
    int StartNum = 0;


    std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
    cin >> YESorNO;
    if (YESorNO == "да")
    {
        std::cout << "\nВведите начальное положение счетчика: ";
        cin >> StartNum;
        Counter S(StartNum);
        while (com != "x" && com != "х")
        {
            std::cout << "Введите команду ( '+' '-' '=' или 'x'): ";
            cin >> com;
            if (com == "+")
            {
                S.increase();
            }
            if (com == "-")
            {
                S.decreace();
            }
            if (com == "=")
            {
                S.show();
            }
        }
    }
    if (YESorNO == "нет")
    {
        Counter S(1);
        std::cout << "\nНачальное положение счетчика установлено на 1\n";

        while (com != "x" && com != "х")
        {
            std::cout << "Введите команду ( '+' '-' '=' или 'x'): ";
            cin >> com;

            if (com == "+")
            {
                S.increase();
            }
            if (com == "-")
            {
                S.decreace();
            }
            if (com == "=")
            {
                S.show();
            }
        }


        std::cout << "До свидания!";
    }
}

