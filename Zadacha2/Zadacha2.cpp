#include <iostream>
#include <cmath>
#include <clocale>
#include "Factrorial.h"

using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");
    int x = 0;
    cout << "Вычисление факториала." << endl;
    cout << "Введите целое полоижетельное число:" << endl;
    cin >> x;
    cout << fact(x);
}