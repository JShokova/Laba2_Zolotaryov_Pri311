#include <iostream>
export module Funcs;

using namespace std;

export int Select() {
	int c;
	cout << "1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление\n Выберите действие: ";
	cin >> c;
	if (c < 1 || c > 4) {
		return Select();
	}
	else
	{
		return c;
	}
}