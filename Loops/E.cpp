#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mx = -1;
    for(int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        if(num > mx)
            mx = num;
    }
    cout << mx;
}