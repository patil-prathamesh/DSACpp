#include <iostream>
#include<cmath>
using namespace std;
bool isprime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if(x%i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int x;
    cin >> x;
    if(isprime(x)) {
        cout << "YES";
    }
    else 
        cout << "NO";
}