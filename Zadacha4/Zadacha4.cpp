import Convert;
#include <iostream>


using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	int x, chose = 0;

	while (chose == 0 || chose > 6 || chose < 0)
	{
		cout << "1. Годы в дни\n2. Дни в часы\n3. Дни в минуты\n4. Часы в минуты\n5. Часы в секунды\n6. Минуты в секунды\nВыбирите действие: ";
		cin >> chose;
	}


	if (chose == 1)
	{
		cout << "\nГода == ";
		cin >> x;
		cout << YTD(x) << " дней\n";
	}
	else if (chose == 2)
	{
		cout << "\nДни == ";
		cin >> x;
		cout << DTH(x) << " часов\n";
	}
	else if (chose == 3)
	{
		cout << "\nДни == ";
		cin >> x;
		cout << DTM(x) << " минут\n";
	}
	else if (chose == 4)
	{
		cout << "\nЧасы == ";
		cin >> x;
		cout << HTM(x) << " Минут\n";
	}
	else if (chose == 5)
	{
		cout << "\nЧасы == ";
		cin >> x;
		cout << HTS(x) << " секунд\n";
	}
	else if (chose == 6)
	{
		cout << "\nМинуты == ";
		cin >> x;
		cout << MTS(x) << " секунд\n";
	}


	return 0;
}