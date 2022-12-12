#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const int n = 6;
    int A[n] = { 1, 5, 7, 2, 3, 9 };
    int res[n];
    int P;
    cout << "Enter number P: ";
    cin >> P;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > P)
        {
            res[count] = A[i];
            count++;
        }
    }
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            b++;
        }
	  
    }
    cout << "Your array:" << endl;;
    for (int i = 0; i < count; i++)
    {
        cout << setw(5) << res[i] << endl;
    }
    cout << "Count of natural elements: " << b;
}
