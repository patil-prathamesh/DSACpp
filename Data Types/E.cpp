#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double r;
    cin >> r;
    cout << fixed << setprecision(9);
    double pie = 3.141592653;
    cout << r*r*pie;
}