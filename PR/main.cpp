#include <iostream> 
#include <iomanip> 
#include <stdio.h>
#include "math.h"
#define _USE_MATH_DEFINES
using namespace std;


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


}

