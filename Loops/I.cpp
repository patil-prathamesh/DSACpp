#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int revx = 0;
    int temp = x;
    while(temp != 0) {
        int mod = temp%10;
        revx = (revx*10)+mod;
        temp /=10;
    }
    cout << revx << endl;
    if(x == revx)
        cout << "YES";
    else 
        cout << "NO";
}