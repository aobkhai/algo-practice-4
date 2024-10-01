#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void static writeRedString(const char* text)
{
    printf("%s %s %s\n", ANSI_COLOR_RED, text, ANSI_COLOR_RESET);
}

void static writeGreenString(const char* text, double value)
{
    cout << ANSI_COLOR_GREEN << text << " " << value << ANSI_COLOR_RESET << endl;
}

void static task1()
{
    double x = 1.6;
    double h = 1.6;
    double f = log(3 * x) - h;
    double e = pow(pow(f, 3), 5);
    cout << "\nРезультат першого завдання: \n\n";
    cout << "x = " << x << endl;
    cout << "h = " << h << endl;
    writeGreenString("f =", f);
    writeGreenString("e =", e);
}

void static task2()
{
    double x;
    cout << "Введіть x: ";
    cin >> x;
    double c = 3.7 * sqrt(5.0 - x) * cos(3.5 - x) - pow(pow(5.0 - x, 3.0), 1 / 5.0);
    cout << "\nРезультат другого завдання: \n\n";
    writeGreenString("x =", x);
    writeGreenString("С =", c);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    writeRedString(">> Починаємо перше завдання!");
    task1();
    cout << endl;
    writeRedString(">> Переходимо до другого завдання!");
    task2();
    cout << endl;
    writeRedString(" >> Роботу виконано <<");
}