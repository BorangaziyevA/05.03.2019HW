#include<iostream>
#include<iomanip>
#include<Windows.h>

using namespace std;

////2//2//////2////2////2/
int main()
{
	srand(time(NULL));

	int vos;
	int var;

	cin >> var;
	int x = 10000;
	int  y = 0;

	for (int vosm = 512; vosm >= 1; vosm /= 8)
	{
		vos = var / vosm;
		var %= vosm;
		y = y + (x*vos);
		x = x / 10;
	}

	if (y > 9999)
	{
		y = y / 10 ;
	}

	cout << endl << y << endl;

	system("pause");
	return 0;
}