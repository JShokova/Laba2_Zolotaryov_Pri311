#include <iostream>
#include <cmath>
#include "Sphere.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int r = 0;
    cout << "Ââåäèòå ðàäèóñ êðóãà:" << endl;
    cin >> r;
    cout << "Äëèíà îêðóæíîñòè == " << len_okr(r) << endl;
    cout << "Ïëîùàäü îêðóæíîñòè == " << sq_okr(r) << endl;
    cout << "Ïëîùàäü ïîâåðõ. ñô. == " << sq_okr_sf(r) << endl;
    cout << "Îáúåì øàðà == " << ob_shara(r) << endl;
    return 0;
}
