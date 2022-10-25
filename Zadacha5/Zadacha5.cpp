import Funcs;
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int select = 0;
    double a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    select = Select();
    if (select == 1) {
        cout << "\n Результат : " << a + b << endl;
    }
    if (select == 2) {
        cout << "\n Результат : " << a - b << endl;
    }
    if (select == 3) {
        cout << "\n Результат : " << a * b << endl;
    }
    if (select == 4) {
        cout << "\n Результат : " << a / b << endl;
    }
    return 0;
}
