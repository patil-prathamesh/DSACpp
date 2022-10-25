#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] == '0')
            {
                if (s[i + 1] == '1' && s[i + 2] == '0')
                {
                    cout << "Good" << endl;
                    return 0;
                }
            }
            else
            {
                if (s[i + 1] == '0' && s[i + 2] == '1')
                {
                    cout << "Good" << endl;
                    return 0;
                }
            }
        }
        cout << "Bad" << endl;
    }
}