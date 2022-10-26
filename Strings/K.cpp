#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        string a,b;
        cin >> a >> b;
        int ssize = min(a.size(),b.size());
        int bsize = max(a.size(),b.size());
        string bstr;
        if(a.size() == bsize)
            bstr = a;
        else
            bstr = b;
        string ans="";
        int i;
        for(i = 0; i < ssize; i++) {
            ans.push_back(a[i]);
            ans.push_back(b[i]);
        }
        for(; i < bsize; i++) {
            ans.push_back(bstr[i]);
        }
        cout << ans << endl;
    }
}