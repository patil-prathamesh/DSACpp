#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x != 1999) {
        cout << "Wrong" << endl;
        cin >> x;
    }
    cout << "Correct";
}