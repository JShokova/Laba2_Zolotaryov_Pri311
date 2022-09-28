#include <iostream>
#include <cmath>
#include <clocale>
#include "Sphere.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int r = 0;
    cout << "Введите радиус круга:" << endl;
    cin >> r;
    cout << "Длина окружности == " << len_okr(r) << endl;
    cout << "Площадь окружности == " << sq_okr(r) << endl;
    cout << "Площадь поверх. сф. == " << sq_okr_sf(r) << endl;
    cout << "Объем шара == " << ob_shara(r) << endl;
    return 0;
}
