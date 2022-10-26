#include<iostream>
#include<vector>
using namespace std;
bool isabsent(char ar[],int n,char ch) {
    for(int i = 0; i < n; i++) {
        if(ar[i] == ch)
            return false;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    char arr[s.length()];
    arr[0] = s[0];
    int index = 1;
    for(int i = 1; i < s.length(); i++) {
        if(isabsent(arr,index,s[i])) {
            arr[index] = s[i];
            index++;
        }
    }
    // a b c
    // cout << index;
    for(int i = 0; i < index; i++) {
        cout << arr[i] << " : " ;
        int count = 0;
        for(int j = 0; j < s.length(); j++) {
            if(arr[i] == s[j])
                count++;
        }
        cout << count << endl;
    }
}