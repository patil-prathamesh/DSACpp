#include<iostream>
using namespace std;
int main()
{
    string x,y;
    cin >> x;
    cin >> y;
    cout << x.compare(y);
    if(x.compare(y) == -1) {
        cout << x;
    } 
    else 
        cout << y;
}