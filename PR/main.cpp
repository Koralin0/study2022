#include <iostream> 
#include <iomanip> 
#include <stdio.h>
#include "math.h"
#define _USE_MATH_DEFINES
using namespace std;

double funcA(int, float, float);
double funcA(int x, float y, float z)
{
	if (z + pow(M_E, 2 + x) != 0)
		return pow(x, 2) * (x + 1) / cbrt(z + pow(M_E, 2 + x)) - pow(sin((x + y) * M_PI / 180), 2);
	else return -99999999;
}
double funcB(int, float, float);
double funcB(int x, float y, float z)
{
	if ((abs(x - 6 * y) / z >= 0) && x != 0)
		return sqrt(abs(x - 6 * y) / z) + pow(cos(pow(x + z, 3) * M_PI / 180), 2) + sin(45 * M_PI / 180);
	else return -99999999;
}

int main()
{
	int x1;
	float y1, z1;
	cout << "Enter x1, y1, z1" << endl;
	cin >> x1 >> y1 >> z1;
	double B = funcB(x1, z1, y1);
	if (B != -99999999)
	{
		B = funcB(x1, y1, z1);
		cout << "B = " << B << endl;
	}
	else cout << "Error" << endl;

	double A = funcA(x1, z1, y1);
	if (A != -99999999)
	{
		A = funcA(x1, y1, z1);
		cout << "A = " << A << endl;
	}
	else cout << "Error" << endl;

}

