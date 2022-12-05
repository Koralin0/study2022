#include <iostream>
using namespace std;
#include "math.h" 

int main()
{
    float M, T;
    cout << "Enter the weight (kg): " << endl;
    cin >> M;
    T = M / 1000;
    cout << pow(M, T);
}
