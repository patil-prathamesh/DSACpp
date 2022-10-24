#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0;
    int r = n-1;
    while(l <= r) {
        if(a[l] != a[r]) {
            cout << "NO";
            return 0;
        }
        l++;
        r--;
    }
    cout << "YES";
}