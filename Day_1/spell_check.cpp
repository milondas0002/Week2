#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if(n!=5) 
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            if(s=="Timru") cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}