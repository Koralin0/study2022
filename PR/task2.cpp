#include <iomanip>
#include "windows.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a, b, c, x;
	double f;
	cout << "Enter a, b, c, x: " << endl;
	cin >> a >> b >> c >> x;
	if ((x + b < 10) && (b != 0) && (c != 0))
	{
		f = pow(a, 3) * pow(x, 2) - b / c;
		cout << f << endl;
	}
	else
		if ((x + b > 10) && (b == 0) && ((x - c) != 0))
		{
			f = (a + (b - a)) / (x - c);
			cout << f << endl;
		}
		else
			if (c != 0)
			{
				f = x / pow(c, 3);
				cout << f << endl;
			}
			else
				cout << "Error";
}
