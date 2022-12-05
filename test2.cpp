#include <iostream>
using namespace std;
#include "math.h" 

int main()
{
    float A, B;
    cin >> A;
    B = A / 1000;
    cout << "Your weight (tons): " << (int)B << endl;
    cout << pow(A,B)
}