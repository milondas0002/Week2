#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        int count=0;
        for(auto it:mp)
        {
            if(it.second%2!=0) count++;
        }
        if(count<2) count=0;
        else count=count-1;
        if(k>=count && k<=n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}