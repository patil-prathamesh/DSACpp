#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = INT_MAX;
        for(int i = 0; i < n-1; i++) {
            int currsum = a[i];
            for(int j = i+1; j < n; j++) {
                currsum += a[j]+((j+1)-(i+1));
                if(currsum < ans)
                    ans = currsum;
                currsum = a[i];
            }
        }
        cout << ans << endl;
    }
}